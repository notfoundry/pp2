# Variables

To store a value and reuse it later, it can be assigned to a local variable.

For example, if you want to print the quote `int foo();` twice, you don't need to repeat the quote multiple times. Instead, you can assign it to a variable and reuse it:

```{livecode}
PP2 (
    X (( int foo(); )),
    print(X),
    print(X)
)
```

This program prints the quote `int foo();` twice, with whitespace between the occurrences.

A local variable is a single lowercase or uppercase letter, which can have a value assigned to it by calling the variable like a function with the value as an argument (`X (5)`, `i (true)`), and can also have the last stored value extracted from it by referencing the variable on its own (``X``, ``i``).