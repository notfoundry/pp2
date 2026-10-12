# while

`while` is PP2's loop statement. It repeats a block while a condition produces
`true`, which makes it the right tool when the amount of work depends on a value
that changes as the loop runs.

## Syntax

```c++
while (<condition>) (<body>)
```

The condition is a Bool expression. PP2 checks it before each trip through the
body. When it produces `true`, the body runs, and then PP2 checks the condition
again. The body is a parenthesized block of PP2 statements, with the same
comma-separated shape you use at top level.

## Examples

Here is a plain counter. `X` starts at `0`, `X lt (3)` produces the Bool the loop
checks, and `X (X inc())` assigns back the next value of `X`. After three trips
through the body, `print(X)` emits `3`.

```{livecode}
PP2 (
    X (0),
    while (X lt (3)) (
        X (X inc())
    ),
    print(X)
)
```

A loop can also be reached with a condition that already produces `false`. In
that case PP2 continues after the loop, so this program prints the original
value of `X`.

```{livecode}
PP2 (
    X (0),
    while (X lt (0)) (
        X (X inc())
    ),
    print(X)
)
```

The same shape works for an accumulator. `S` starts at `0`, `I` walks from `1`
through `5`, and `S (S plus (I))` adds the current `I` into the running total.
This prints `15`.

```{livecode}
PP2 (
    S (0),
    I (1),
    while (I leq (5)) (
        S (S plus (I)),
        I (I inc())
    ),
    print(S)
)
```

Counting down uses the same idea in the other direction. `N dec()` gives one
less than `N`, and `C inc()` counts how many times the body has run. Starting
from `10`, this prints `10`.

```{livecode}
PP2 (
    N (10),
    C (0),
    while (N gt (0)) (
        N (N dec()),
        C (C inc())
    ),
    print(C)
)
```

## Details

The important part of a `while` loop is that the body moves the program toward
finishing. A counter usually advances with an assignment like `X (X inc())`,
which stores one more than the current `X`. A countdown stores `N dec()`, one
less than the current `N`. An accumulator updates a separate total with a method
such as `S plus (I)`.

The comparison methods in these examples all produce the Bool value checked by
the loop. `lt` asks whether the left side is less than the right side, `leq`
asks whether it is less than or equal to the right side, and `gt` asks whether
it is greater than the right side.

## See also

- [if](if)
- [for](for)
