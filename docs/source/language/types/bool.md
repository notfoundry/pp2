# Bool

`Bool` is PP2's truth-value type. Its two literal values are `true` and `false`,
and an `if` condition has to produce one before PP2 can choose a branch.

## Syntax

```c++
true
false

<Bool> not()
<Bool> and (<Bool>)
<Bool> or (<Bool>)
<Bool> xor (<Bool>)
```

`not()` is a method call with zero arguments, so the empty parentheses are part
of the spelling. The other Bool methods take one Bool argument, written in
parentheses after the method name.

## Examples

A Bool literal prints as the token itself. That is handy when you are checking a
small expression and want to see exactly what PP2 made of it.

```{livecode}
PP2 (
    print(true)
)
```

```{livecode}
PP2 (
    print(false)
)
```

`not()` flips a Bool value.

```{livecode}
PP2 (
    print(true not())
)
```

```{livecode}
PP2 (
    print(false not())
)
```

`and`, `or`, and `xor` are methods on the Bool to their left. Each one takes the
Bool on its right as an argument.

```{livecode}
PP2 (
    print(true and (false))
)
```

```{livecode}
PP2 (
    print(false or (true))
)
```

```{livecode}
PP2 (
    print(true xor (false))
)
```

Method chains keep reading left to right. This example first computes
`true and (false)`, then calls `or (true)` on that result.

```{livecode}
PP2 (
    print(true and (false) or (true))
)
```

A Bool is an ordinary PP2 value, so a local variable can hold one and use it
again as the receiver of a Bool method.

```{livecode}
PP2 (
    B (true),
    print(B and (false))
)
```

## Details

Printing `true` and `false` emits those same literal tokens. The Bool methods
return Bool values, which is why a method chain can continue from the value that
the previous call produced. A local variable can store a Bool and later read it
back as the receiver of a Bool method.

<!-- TODO: Add missing truth-table tests before documenting the complete tables for and/or/xor. -->

## Introspection / type

Bool has ordinary PP2 type information. Asking `type` of `true` returns the
Type object for `Bool`, with `Any` as its base type.

```{livecode}
PP2 (
    print(true type)
)
```

The result is exactly `(,Type,(,Bool,Any))`.

## See also

- [if](../control-flow/if)
- [Variables](../variables)
- [Type](type)
