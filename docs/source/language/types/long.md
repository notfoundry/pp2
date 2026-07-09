# Long

`Long` is PP2's arbitrary-precision integer. Most of the time you get one by
doing arithmetic near the edge of Int's range, and PP2 promotes the value on its
own.

## Syntax

```c++
Long (<Int>)
Long (((<digit>)(<digit>)(<digit>)))
Long ((((<digit>)(<digit>)(<digit>))))
```

`Long (n)` promotes an ordinary [Int](int). `Long (((...)))` builds a Long from
a run of single-digit tokens. One extra layer of parentheses around the digits
builds the negative value.

## Examples

An Int covers `0` through `127`. When a result steps beyond that range, PP2
promotes it to Long.

```{livecode}
PP2 (
    print(127 inc())
)
```

The same promotion happens when a larger arithmetic result comes from two Int
values.

```{livecode}
PP2 (
    print(120 plus (120))
)
```

A result that stays inside the Int range stays an Int.

```{livecode}
PP2 (
    print(126 inc())
)
```

The promoted value reports the Long Type object when you ask for its type.

```{livecode}
PP2 (
    print(127 inc() type)
)
```

Promotion also covers results below zero, so this prints the negative token
sequence `- 2`.

```{livecode}
PP2 (
    print(5 minus (7))
)
```

You can also build a Long by hand. `Long (5)` promotes an Int value.

```{livecode}
PP2 (
    print(Long (5))
)
```

A parenthesized run of digit tokens builds the corresponding positive Long.

```{livecode}
PP2 (
    print(Long (((1)(2)(8))))
)
```

One extra layer of parentheses around those digits builds the negative Long.

```{livecode}
PP2 (
    print(Long ((((1)(2)(8)))))
)
```

Long is contagious in arithmetic. When one side of a call is Long, the result is
Long as well.

```{livecode}
PP2 (
    print(5 plus (Long (((2)(0)(0)))))
)
```

The same method-call shape works for larger values.

```{livecode}
PP2 (
    print(Long (((1)(2)(3))) times (Long (((4)(5)(6)))))
)
```

Comparisons work across Int and Long values.

```{livecode}
PP2 (
    print(5 eq (Long (5)))
)
```

A Long can move through a loop just like a smaller Int. This starts at `125`,
keeps incrementing while the value is less than `130`, and prints `130`.

```{livecode}
PP2 (
    X (125),
    while (X lt (Long (((1)(3)(0))))) (
        X (X inc())
    ),
    print(X)
)
```

## Details

The Int boundary is `0` through `127`. `126 inc()` stays in range and prints
`127`; `127 inc()` crosses the boundary and prints `128` as a Long. Subtraction
can cross the lower boundary too, which is why `5 minus (7)` prints `- 2`.

Once a Long enters arithmetic, the result stays Long. That rule lets an Int on
the other side come along for the ride, as in `5 plus (Long (((2)(0)(0))))`.

The digit constructor reads one parenthesized digit at a time. `Long
(((1)(2)(8)))` builds `128`, and `Long ((((1)(2)(8))))` builds `- 128`.

## Introspection / type

Long has ordinary PP2 type information. Asking `type` of a Long returns the Type
object for `Long`, with `Any` as its base type. In the example above,
`127 inc() type` prints exactly `(,Type,(,Long,Any))`.

## See also

- [Int](int)
- [Type](type)
- [while](../control-flow/while)
