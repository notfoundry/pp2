# if

`if` is PP2's branch statement. It reduces a condition to a `Bool`, then runs
the branch chosen by that value. Use it when the C you want to generate depends
on something PP2 can work out while the source file is being preprocessed.

## Syntax

```c++
if (<condition>) (<if-branch>)
if (<condition>) (<if-branch>) else (<else-branch>)
if (<condition>) (<if-branch>) else if (<condition>) (<else-if-branch>) else (<else-branch>)
```

The condition is the expression in the first set of parentheses. PP2 compiles
that expression before it chooses a branch, so the examples below use Bool
literals and comparison expressions. Each branch is a parenthesized block of PP2
statements, with the same comma-separated shape you use at top level.

## Examples

Let's start with the smallest useful case. `true` chooses the first branch, so this
prints `1`.

```{livecode}
PP2 (
    if (true) (
        print(1)
    ) else (
        print(0)
    )
)
```

With `false`, PP2 chooses the `else` branch and prints `0`.

```{livecode}
PP2 (
    if (false) (
        print(1)
    ) else (
        print(0)
    )
)
```

An `else if` chain is read from left to right. PP2 reaches the next condition
after the previous one produces `false`, so this program gets past the first
test and then prints `2`.

```{livecode}
PP2 (
    if (false) (
        print(1)
    ) else if (true) (
        print(2)
    ) else (
        print(3)
    )
)
```

Conditions can be computed. Here `X` gets the value `5`, `X gt (3)` produces
`true`, and the selected branch prints `1`.

```{livecode}
PP2 (
    X (5),
    if (X gt (3)) (
        print(1)
    ) else (
        print(0)
    )
)
```

The other comparison methods produce Bool values in the same method-call shape.

```{livecode}
PP2 (
    if (3 lt (5)) (
        print(1)
    ) else (
        print(0)
    )
)
```

```{livecode}
PP2 (
    if (5 eq (5)) (
        print(5 plus (5))
    )
)
```

A false `if` with no `else` contributes nothing to the output and then PP2 moves
on. This prints `0`, passes over the middle branch, and then prints `2`.

```{livecode}
PP2 (
    print(0),
    if (false) (
        print(1)
    ),
    print(2)
)
```

Branches are PP2 statement blocks, so they can contain another `if`.

```{livecode}
PP2 (
    if (true) (
        if (true) (
            print(9)
        )
    )
)
```

## Details

The condition is compiled before branch selection, and the branch decision comes
from the Bool that expression produces. In these examples the condition is a
literal `true` or `false`, a comparison using `gt`, `lt`, or `eq`, or a
comparison that reads a local variable first.

The expansion comes from the selected block, along with any comma-separated
statements that run before or after the `if`. In an `else if` chain, PP2 keeps
going until a condition produces `true`; if they all produce `false`, the final
`else` block runs.

Because branches are statement blocks, nesting works exactly where you would
expect it to work. If a false `if` has no `else`, PP2 simply keeps going with
the surrounding statement list.

<!-- TODO: Add/confirm an if test for using a bare Bool variable directly as the condition. -->

## See also

- [Bool](../types/bool)
- [Variables](../variables)
