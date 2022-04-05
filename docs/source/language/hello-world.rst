Hello World!
============

It's traditional that the first thing to learn in any new programming language is the famous ``Hello World!`` program, printing the aformentioned text.

In pp2 this is pretty simple:

.. code:: pp2
    
    print(
        (Hello World!)
    )

The entire program consists of a call to the function ``print`` with the tokens ``Hello World!`` passed as an argument in parentheses; all code in the top-level scope is part of the main program, without needing an explicit ``main`` function as an entrypoint.

The ``print`` function will print the tokens ``Hello World!`` into the source file being preprocessed. However, since that file is likely then going to be passed into a C or C++ compiler (which won't appreciate a floating ``Hello World!`` being present in the code), this is not particularly helpful.
What we really need to do is write a metaprogram: A ``Hello World!`` program generator!

.. code:: pp2
    
    print((
        int main() {
            puts("Hello World!");
        }
    ))

Rather than printing ``Hello World!`` directly into the source file, the program now generates a valid C program that will print ``Hello World!`` when it is executed, and emits that generated program into the source file instead. It's that easy!