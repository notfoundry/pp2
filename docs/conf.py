import os
import glob


# -- Project information -----------------------------------------------------

project = 'pp2'
copyright = '2022, Mark Johnson'
author = 'Mark Johnson'


# -- General configuration ---------------------------------------------------

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = ['breathe', 'sphinx_jinja']

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
html_theme = 'sphinx_book_theme'

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = ['_static']

breathe_default_project = "pp2"

jinja_contexts = {
    'index_generation': {'header_files': list(os.path.abspath(p) for p in glob.glob("../include/**/*.h", recursive=True))}
}


from pygments.lexer import RegexLexer, default
from pygments.token import *
from sphinx.highlighting import lexers


class PP2Lexer(RegexLexer):
    name = 'pp2'

    tokens = {
        'root': [
            default('body')
        ],
        'body': [
            (r'/\*', Comment.Multiline, 'comment'),
            (r'//.*?$', Comment.Singleline),
            
            (r'\s+', Whitespace),
            
            (r'[0-9]+', Number.Integer),
            
            (r'(true|false)', Keyword),
            
            (r'\(', Punctuation, 'body'),
            (r'\)', Punctuation, '#pop'),
            
            (r'print', Keyword.Declaration, 'print')
        ],
        'print': [
            (r'\(', Punctuation, 'print_body')
        ],
        'print_body': [
            (r'\(', Punctuation, 'print_literal'),
            (r'\)', Punctuation, '#pop')
        ],
        'print_literal': [
            (r'[^,\)\(]+', String),
            (r'\)', Punctuation, '#pop')
        ],
        'comment': [
            (r'[^*/]+', Comment.Multiline),
            (r'/\*', Comment.Multiline, '#push'),
            (r'\*/', Comment.Multiline, '#pop'),
            (r'[*/]', Comment.Multiline)
        ]
    }

lexers['pp2'] = PP2Lexer()
