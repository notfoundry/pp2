# Bool

A boolean (or just `Bool`) data type can only have two values: `true` or `false`. Bools are usually used for control flow, and they are often a result of logical and relational operators.

```{livecode}
PP2 (
    print(true),
    print(false)
)
```

The typical logical operators for `Bool` types are also available in pp2:

```{livecode}
PP2 (
    print(true and (false)),
    print(false or (false) or (true)),
    print(true not())
)
```
