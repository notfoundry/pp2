import os
import sys
import glob


# -- Project information -----------------------------------------------------

project = 'pp2'
copyright = '2022, Mark Johnson'
author = 'Mark Johnson'


# -- General configuration ---------------------------------------------------

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
sys.path.append(os.path.abspath("./ext"))
extensions = ['breathe', 'sphinx_jinja', 'myst_parser', 'livecode']

# Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This pattern also affects html_static_path and html_extra_path.
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']


# -- Options for HTML output -------------------------------------------------

# The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#
html_theme = 'furo'

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = ['_static']

html_css_files = [
    'css/codemirror.css',
    'css/goldenlayout-base.css',
    'css/goldenlayout-light-theme.css',
    'css/livecode.css'
]

html_js_files = [
    'scripts/livecode.js',
    'scripts/livecode-constants.js',
    'scripts/codemirror.js',
    'scripts/codemirror/autorefresh.js',
    'scripts/codemirror/matchbrackets.js',
    'scripts/codemirror/closebrackets.js',
    'scripts/codemirror/mode/stylus.js',
    'scripts/goldenlayout.js',
    'scripts/ansicolor.js'
]
with open("../single_include/pp2/pp2.h") as livecode_header:
    with open('{}/scripts/livecode-constants.js'.format(html_static_path[0]), 'w') as livecode_constants:
        livecode_constants.write('LIVECODE_HEADER = String.raw`{}`\n'.format(livecode_header.read()))

breathe_default_project = "pp2"

jinja_contexts = {
    'index_generation': {'header_files': list(os.path.abspath(p) for p in glob.glob("../include/**/*.h", recursive=True))}
}