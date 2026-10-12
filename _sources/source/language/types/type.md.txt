# Type

`Type` is PP2's value for talking about what another value is. Asking `type`
of any value gives you that value's Type object, so `7 type` is the Type object
for [Int](int), and `true type` is the Type object for [Bool](bool).

When PP2 prints a Type object, it emits the raw token tuple for that object. The
examples below are useful because they show the shape directly.

```{livecode}
PP2 (
    print(7 type)
)
```

This prints exactly `(,Type,(,Int,Any))`.

```{livecode}
PP2 (
    print(true type)
)
```

This prints exactly `(,Type,(,Bool,Any))`.

```{livecode}
PP2 (
    print((quoted) type)
)
```

This prints exactly `(,Type,(,Quote,Any))`.

A bare type name is a first-class Type value. `Int` is the same object you get
back from asking the type of any Int value.

```{livecode}
PP2 (
    print(Int)
)
```

This prints exactly `(,Type,(,Int,Any))`.

`Any` is the root of the whole system. It has no supertype of its own, which is
why its tuple ends with an empty slot.

```{livecode}
PP2 (
    print(Any)
)
```

This prints exactly `(,Type,(,Any,))`.

Types have a type too. Asking the type of a Type gives you `Type`, and asking
again keeps giving you `Type`.

```{livecode}
PP2 (
    print(7 type type)
)
```

This prints exactly `(,Type,(,Type,Any))`.

## Details

A Type object has the shape `(,Type,(,name,supertype))`. The `name` slot holds
the name of the type, and the `supertype` slot holds the type it inherits from.
Every concrete type, including [Int](int), [Long](long), [Bool](bool),
[Quote](quote), and [Fn](fn), has [Any](any) as its supertype.

`Any` has the tuple `(,Type,(,Any,))` because it is the root. There is no
supertype after `Any`, so the final position is empty.

The Type object for `Type` is `(,Type,(,Type,Any))`. That makes `Type` the
fixpoint in the introspection path: once you have a Type value, `type` keeps
bringing you back to `Type`.

## See also

- [Any](any)
- [Int](int)
- [Long](long)
- [Bool](bool)
- [Quote](quote)
- [Fn](fn)
