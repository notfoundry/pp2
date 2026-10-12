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

## Longer names with `var`

A single letter is quick to type but says nothing about what it holds. When you want a name that reads like a word, write it with the `var` keyword, spelling the name out one character at a time inside parentheses:

```{livecode}
PP2 (
    var (t m p) (( int foo(); )),
    print(var (t m p)),
    print(var (t m p))
)
```

This is the same program as before, storing the quote and printing it twice, only now the variable is called `tmp` instead of `X`. The characters are written with spaces between them because a name like `tmp` is a single token to the preprocessor, and a single token cannot be taken apart once it has been formed. Spelling it as `t m p` hands pp2 the three characters it needs to build the name. You can use the letters `a` to `z` and `A` to `Z`, the digits `0` to `9`, and the underscore, up to forty characters in all.

Assignment and reading work exactly as they do for a single letter. Writing a value after the name stores it, and writing the name on its own reads it back:

```{livecode}
PP2 (
    var (t o t a l) (5),
    var (t o t a l) (42),
    print(var (t o t a l))
)
```

The second assignment overwrites the first, so this prints `42`. There is no separate syntax for declaring a variable and then changing it later. Every assignment is written the same way, and the most recent one wins. The right-hand side is an ordinary expression, so a variable can be updated from its own current value:

```{livecode}
PP2 (
    var (c o u n t) (0),
    var (c o u n t) (var (c o u n t) plus (1)),
    print(var (c o u n t))
)
```

That prints `1`.

Two names are the same variable only when they are spelled with the same characters, so names that merely begin alike stay apart. Here `n` and `num` are different variables and keep their own values:

```{livecode}
PP2 (
    var (n) (2),
    var (n u m) (9),
    print(var (n)),
    print(var (n u m))
)
```

That prints `2 9`. A one-character `var` name reaches exactly the same variable as the bare letter, so `var (X)` and plain `X` are two ways of writing the same thing.

## Registers and named variables

The single letters and the `var` names are one variable system with two ways in, and the difference between the two is worth understanding.

Think of the single letters the way a processor thinks of its registers. There is a small, fixed set of them, and reaching one is as cheap as a lookup can be. A `var` name is more like a value kept at a memory address. There is no limit on how many you can have or how long you can make them, and that room costs a little to reach, because pp2 finds a variable by matching its name character by character. A one-letter name settles the match after a single character. A name like `t o t a l` compares five characters every time it is read or written, at every binding the lookup passes on the way.

So the short forms are the ones to reach for in the hot spots of a program, the loop counters and the scratch values that get touched over and over. `i`, `j`, `X`, and `Y` earn their keep exactly where a tight loop would. Save the longer `var` names for the values that are worth naming clearly and are read less often, the running totals and configuration held across a whole computation. A program written this way keeps its inner loops on the cheap letters and spends the clearer names where clarity is what you are after.

## See also

- [Functions](functions)
- [Types](types)