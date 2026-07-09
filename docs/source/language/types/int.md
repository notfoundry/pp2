# Int

`Int` is PP2's small whole-number type. It is kept as a plain literal while the
value stays in range, which makes it the number type you will usually see in
small examples and counters.

## Syntax

```c++
<Int>

<Int> plus (<Int>)
<Int> minus (<Int>)
<Int> times (<Int>)
<Int> div (<Int>)
<Int> mod (<Int>)
<Int> inc()
<Int> dec()

<Int> eq (<Int>)
<Int> lt (<Int>)
```

Arithmetic and comparison are method calls in the same `value op (arg)` shape
you saw on [Bool](bool). A zero-argument method such as `inc()` or `dec()`
keeps its empty parentheses.

## Examples

An Int literal prints as the literal token itself.

```{livecode}
PP2 (
    print(42)
)
```

`plus` adds the Int on the right to the Int on the left.

```{livecode}
PP2 (
    print(40 plus (2))
)
```

Method chains read left to right. This program adds `2` and `3`, then adds `4`
to that result.

```{livecode}
PP2 (
    print(2 plus (3) plus (4))
)
```

`inc()` and `dec()` step by one.

```{livecode}
PP2 (
    print(5 inc())
)
```

```{livecode}
PP2 (
    print(5 dec())
)
```

The multiplication method is `times`.

```{livecode}
PP2 (
    print(6 times (7))
)
```

`div` is integer division, and `mod` is the remainder.

```{livecode}
PP2 (
    print(23 div (5))
)
```

```{livecode}
PP2 (
    print(23 mod (5))
)
```

The left-to-right rule applies across arithmetic methods. PP2 performs the
`plus` call first here, then calls `times (4)` on the result, so this prints
`20`.

```{livecode}
PP2 (
    print(2 plus (3) times (4))
)
```

Comparison methods return Bool values.

```{livecode}
PP2 (
    print(5 eq (5))
)
```

```{livecode}
PP2 (
    print(3 lt (7))
)
```

A local variable can hold an Int and then store the result of another Int
method call.

```{livecode}
PP2 (
    X (5),
    X (X inc()),
    print(X)
)
```

## Details

An Int covers the range `0` through `127`. When an arithmetic result leaves that
range, PP2 promotes it to [Long](long). The Long page shows the boundary cases,
including `127 inc()` becoming `128` and a subtraction that becomes negative.

The methods shown here all return ordinary PP2 values, so they can feed the
next call in a chain, a comparison, or an assignment.

## Introspection / type

Int has ordinary PP2 type information. Asking `type` of an Int returns the Type
object for `Int`, with `Any` as its base type.

```{livecode}
PP2 (
    print(7 type)
)
```

The result is exactly `(,Type,(,Int,Any))`.

## See also

- [Long](long)
- [Bool](bool)
- [Type](type)
- [Variables](../variables)
