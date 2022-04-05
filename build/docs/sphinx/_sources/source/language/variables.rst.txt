Variables
=========

To store a value and reuse it later, it can be assigned to a local variable.

For example, if you want to print the number ``10`` twice, you don't need to repeat the number multiple times. Instead, you can assign it to a variable and reuse it:

.. code:: pp2
    
    X (10),
    print(X),
    print(X)

This program prints the number ``10`` twice, with whitespace between the occurrences.

A local variable is a single lowercase or uppercase letter, which can have a value assigned to it by calling the variable like a function with the value as an argument (``X(5)``, ``i(12)``), and can also have the last stored value extracted from it by referencing the variable on its own (``X``, ``i``).