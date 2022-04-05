Welcome to pp2's documentation!
===============================

.. toctree::
   :maxdepth: 2
   :caption: Contents:


.. jinja:: index_generation

    {% for f in header_files %}
    .. doxygenfile:: {{f}}
    {% endfor %}