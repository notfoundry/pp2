# Fn

`Fn` is PP2's function type. A function literal lets you write a function
inline, call it right where it appears, or keep it as a value for later.

## Syntax

```c++
fn (<parameters>) (<body>) (<arguments>)

<Fn> type
```

The `fn (params) (body)` part is the function literal. The names in the first
parentheses are the parameters, and the second parentheses hold the body. The
body is an expression, and the value it produces is the result of the function.

Arguments go in parentheses right after the function value. That call supplies
values for the parameters in order.

## Examples

Here is a one-parameter function written inline. The parameter `x` receives `3`,
the body computes `x plus (1)`, and the call prints `4`.

```{livecode}
PP2 (
    print(fn (x) (x plus (1)) (3))
)
```

A function with several parameters takes several arguments in the same order.
This one adds `2` and `3`.

```{livecode}
PP2 (
    print(fn (x, y) (x plus (y)) (2, 3))
)
```

The same rule carries on to more parameters. Here `a`, `b`, and `c` receive
`1`, `2`, and `4`, and the body adds them from left to right.

```{livecode}
PP2 (
    print(fn (a, b, c) (a plus (b) plus (c)) (1, 2, 4))
)
```

A function is an ordinary PP2 value, so it has a type. Ask for that type when
you want a stable look at the function value itself.

```{livecode}
PP2 (
    print(fn (x) (x) type)
)
```

The result is exactly `(,Type,(,Fn,Any))`.

## Details

A function literal is a first-class value, like an [Int](int) or a [Bool](bool).
That means a function can be stored in a variable, passed around, and called
later. The [Functions](../functions) chapter shows how to give one a home and
run it from there.

When the function is written and called inline, the arguments follow the literal
immediately. In `fn (x) (x plus (1)) (3)`, PP2 creates the function, applies it
to `3`, and uses the result of the body as the value of the whole expression.

Function values have ordinary PP2 type information. Asking `type` of a function
returns the Type object for `Fn`, with `Any` as its base type.

## See also

- [Functions](../functions)
- [Variables](../variables)
- [Type](type)
