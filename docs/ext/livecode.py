import re
import html

import requests
from docutils import nodes
from docutils.parsers.rst import Directive


LIVE_CODE_TEMPLATE = """<div class="livecode" livecode-default="{output}">{code}</div>"""

with open('../../single_include/pp2/pp2.h') as livecode_header:
    LIVE_CODE_HEADER = livecode_header.read()

ANSI_COLOR_CODE_PATTERN = re.compile(r'[\u001b\u009b][\[()#;?]*(?:[0-9]{1,4}(?:;[0-9]{0,4})*)?[0-9A-PRZcf-nqry=><]')


class LiveCodeDirective(Directive):
    has_content = True

    def compile(self, code):
        payload = {
            "source": (LIVE_CODE_HEADER + '\n' + code),
            "lang": "c++",
            "options": {
                "userArguments": "-E -P -ftrack-macro-expansion=0 -std=c++20",
                "compilerOptions": {
                      "skipAsm": False,
                      "executorRequest": False
                },
                "filters": {
                     "binary": False,
                     "commentOnly": True,
                     "demangle": True,
                     "directives": True,
                     "execute": False,
                     "intel": True,
                     "labels": True,
                     "libraryCode": False,
                     "trim": False
                },
                "tools": [],
                "libraries": []
            },
            "allowStoreCodeDebug": True
        }
        response = requests.post('https://godbolt.org/api/compiler/g121/compile', json=payload)
        response.encoding = 'utf-8'

        output = response.text
        output = output[output.find('\n')+1:]
        output = ANSI_COLOR_CODE_PATTERN.sub('', output)
        return output

    def quote(self, text):
        return html.escape(text, quote=True)

    def run(self):
        if self.has_content and len(self.content):
            code_input = '\n'.join(self.content)
            code_output = self.compile(code_input)
            code_block = LIVE_CODE_TEMPLATE.format(code=code_input, output=self.quote(code_output))
            return [nodes.raw('', code_block, format='html')]


def setup(app):
    app.add_directive("livecode", LiveCodeDirective)

    return {
        'version': '0.1',
        'parallel_read_safe': True,
        'parallel_write_safe': True,
    }
