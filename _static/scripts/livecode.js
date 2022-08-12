
$(document).ready(function(){
    function resizeFrames(layout, lhsHeight, rhsHeight) {
        const newHeight = Math.max(lhsHeight, rhsHeight);
        layout.updateSize("99.9%", newHeight);
    }

    function throttle(f, delay){
        var timer = null;
        return function(){
            var context = this, args = arguments;
            clearTimeout(timer);
            timer = window.setTimeout(function(){
                f.apply(context, args);
            },
            delay);
        };
    }

    function compile(code, callback) {
        const data = JSON.stringify({
            "source": (LIVECODE_HEADER + '\n' + code),
            "lang": "c++",
            "options": {
                "userArguments": "-E -P -ftrack-macro-expansion=0 -std=c++20",
                "compilerOptions": {
                      "skipAsm": false,
                      "executorRequest": false
                },
                "filters": {
                     "binary": false,
                     "commentOnly": true,
                     "demangle": true,
                     "directives": true,
                     "execute": false,
                     "intel": true,
                     "labels": true,
                     "libraryCode": false,
                     "trim": false
                },
                "tools": [],
                "libraries": []
            },
            "allowStoreCodeDebug": true
        });

        const requestOptions = {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: data
        };

        fetch('https://godbolt.org/api/compiler/g121/compile', requestOptions)
            .then(response => response.text())
            .then(callback);
    }

    function attachHeightObserver(container, callback) {
        const ro = new ResizeObserver(entries => {
            const newHeight = Math.max.apply(null, entries.map(function(o){ return o.contentRect.height; }));
            callback(newHeight + 20);
        });
        ro.observe(container.getElement().find('.CodeMirror')[0]);
    }

    $(".livecode").each(function() {
        const codeInput = $(this).text().trim();
        const codeOutput = $(this).attr('livecode-default') || ''
        $(this).empty();

        var config = {
            settings: {
                hasHeaders: false,
                constrainDragToContainer: true,
                reorderEnabled: false,
                showPopoutIcon: false,
                showMaximiseIcon: false,
            },
            content: [{
                type: 'row',
                content: [{
                    type:'component',
                    componentName: 'livecode-code',
                    componentState: { text: codeInput },
                },
                {
                    type:'component',
                    componentName: 'livecode-output',
                    componentState: { text: codeOutput }
                }]
            }]
        };

        const myLayout = new window.GoldenLayout( config, $(this) );
        var liveCodeInput, liveCodeOutput;
        var lhsHeight = 0, rhsHeight = 0;

        myLayout.registerComponent( 'livecode-code', function( container, state ){
                liveCodeInput = CodeMirror(container.getElement()[0], {
                    value: state.text,
                    mode:  "stylus",
                    indentUnit: 4,
                    smartIndent: false,
                    styleActiveLine: true,
                    autoRefresh: true,
                    matchBrackets: true,
                    autoCloseBrackets: true,
                    viewportMargin: Infinity
                });

                liveCodeInput.on('change', throttle(function(instance, changeObj) {
                    compile(liveCodeInput.getValue(), function (data) {
                        liveCodeOutput.setValue(Colors.strip(data.replace(/.*/, "").slice(1)))
                    })
                }, 250));

                attachHeightObserver(container, function  (newHeight) {
                    lhsHeight = newHeight;
                    resizeFrames(myLayout, lhsHeight, rhsHeight);
                })
        });

        myLayout.registerComponent( 'livecode-output', function( container, state ){
            liveCodeOutput = CodeMirror(container.getElement()[0], {
                value: state.text,
                mode:  "null",
                autoRefresh: true,
                readOnly: true,
                viewportMargin: Infinity
            });

            attachHeightObserver(container, function  (newHeight) {
                rhsHeight = newHeight;
                resizeFrames(myLayout, lhsHeight, rhsHeight);
            })
        });

        myLayout.init();
        myLayout.updateSize("100%", 100);
    });
});