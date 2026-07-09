# for

`for` is PP2's three-part loop, the same shape you know from C. It is written as
`for (init, condition, update)` followed by the body, and it is built on top of
`while`.

## Syntax

```c++
for (<init>, <condition>, <update>) (<body>)
```

The init clause runs first. The condition is a Bool expression, checked before
each trip through the body. After the body runs, PP2 runs the update clause and
then checks the condition again.

## Examples

The first clause can set up a counter, the second clause can keep it inside a
range, and the third clause can advance it. `put` emits each iteration's value
into the output, so the whole loop produces the sequence `0 1 2`.

```{livecode}
PP2 (
    for (I (0), I lt (3), I (I inc())) (
        put(I)
    )
)
```

The body can update state. Here the loop adds `1`, `2`, `3`, and `4` into `S`,
then `print(S)` emits `10`.

```{livecode}
PP2 (
    S (0),
    for (I (1), I leq (4), I (I inc())) (
        S (S plus (I))
    ),
    print(S)
)
```

The three clauses are optional. In this example `I` is set up before the loop,
so the init clause is left empty. The loop uses the condition and update clauses
to control the count.

```{livecode}
PP2 (
    S (0),
    I (0),
    for (, I lt (3), I (I inc())) (
        S (S plus (I))
    ),
    print(S)
)
```

Loops can be nested. This runs the inner loop two times for each of the two
outer iterations, so `S` is incremented four times and the program prints `4`.

```{livecode}
PP2 (
    S (0),
    for (I (0), I lt (2), I (I inc())) (
        for (J (0), J lt (2), J (J inc())) (
            S (S inc())
        )
    ),
    print(S)
)
```

## Details

A `for` loop keeps the setup, test, and step next to each other. In the examples
above, `I (0)` or `I (1)` initializes the counter, `I lt (...)` or `I leq (...)`
produces the Bool checked by the loop, and `I (I inc())` stores the next counter
value after each body run.

Because `for` is built on top of `while`, the body is the same kind of
parenthesized PP2 statement block. It can emit with `put`, update an
accumulator with `S (S plus (I))`, or contain another loop.

## See also

- [if](if)
- [while](while)
