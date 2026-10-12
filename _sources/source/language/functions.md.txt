# Functions

The [Fn](types/fn) type page introduced the smallest function expression:
`fn (params) (body)`. It writes a function inline, and arguments in parentheses
right after it run the function immediately.

```{livecode}
PP2 (
    print(fn (x) (x plus (1)) (3))
)
```

That prints `4`. The real reason to give functions their own chapter is that a
function is a value. You can give it a home, pass it around, and call it later.

## Stored functions

Storing a function uses the same local-variable assignment you already know from
[Variables](variables). This statement gives `F` a function value:
`F (fn (x) (x plus (1)))`. The assignment is just a call to the variable `F`
with the function as its value.

To run a function stored in a variable, call its `call` method. Here `F call (3)`
runs the stored function with `3` as the argument. A stored function is called
with `call` because `F (value)` already means assignment to the variable `F`.

```{livecode}
PP2 (
    F (fn (x) (x plus (1))),
    print(F call (3))
)
```

That prints `4`.

Stored functions can feed one another. `G call (10)` runs first and produces
`11`. That value becomes the argument to `F`, which doubles it.

```{livecode}
PP2 (
    F (fn (x) (x times (2))),
    G (fn (y) (y plus (1))),
    print(F call (G call (10)))
)
```

That prints `22`.

## Nested arguments

An argument can itself be a call. Method arguments are already expressions, so
the inner call finishes before the outer method receives its value. Here the
inner `3 plus (4)` produces `7`, and then `2 times (7)` gives `14`.

```{livecode}
PP2 (
    print(2 times (3 plus (4)))
)
```

That prints `14`.

The nested call can sit anywhere an argument can. This time `2 times (3)`
produces `6` before the outer `plus` adds it to `10`.

```{livecode}
PP2 (
    print(10 plus (2 times (3)))
)
```

That prints `16`.

The same rule applies to functions. The inner function call produces `6`, and
that value becomes the argument to the outer function.

```{livecode}
PP2 (
    print(fn (x) (x) (fn (y) (y plus (1)) (5)))
)
```

That prints `6`. A call can appear as a method argument, as the argument to
another function call, or as one side of a larger expression, and PP2 evaluates
the inner call far enough to produce a value before it continues with the outer
expression.

## Closures

A closure is a function value that remembers variables from the scope where it
was written. If you store that function and call it later, those remembered
values come along with it.

### Capturing variables

Start with a free variable. `F` is written after `X` has been set to `5`. The
body has one parameter, `y`, and it also reads `X` from the surrounding scope.

```{livecode}
PP2 (
    X (5),
    F (fn (y) (y plus (X))),
    print(F call (3))
)
```

`F call (3)` adds its argument to the captured `X`, so this prints `8`.

The captured value belongs to the stored function. Calling the same function
several times uses the same captured `B` each time.

```{livecode}
PP2 (
    B (10),
    A (fn (x) (x plus (B))),
    print(A call (1)),
    print(A call (2))
)
```

That prints `11 12`.

### When and where capture happens

The capture happens when PP2 creates the function value. Here `F` captures `X`
while it is `5`. The later assignment stores `99` in the surrounding variable,
and `F` still has the earlier value.

```{livecode}
PP2 (
    X (5),
    F (fn (y) (y plus (X))),
    X (99),
    print(F call (0))
)
```

That prints `5`.

The place where the function is written matters. `G` writes `X (100)`
immediately before it calls `F`. `F` was written in the earlier scope where `X`
was `7`, so that is the value its body reads. This is lexical scope: captured
variables come from the definition site.

```{livecode}
PP2 (
    X (7),
    F (fn (y) (y plus (X))),
    G (fn (z) (
        X (100),
        F call (z)
    )),
    print(G call (0))
)
```

That prints `7`.

### Names inside the body

When a parameter has the same name as a captured variable, the parameter wins
inside the body. `F` receives `5` for its parameter named `X`, so the body adds
`1` to that parameter value.

```{livecode}
PP2 (
    X (10),
    F (fn (X) (X plus (1))),
    print(F call (5))
)
```

That prints `6`.

The call binds its parameter named `X` only for the function body. The outer
`X` keeps its own value after the call has finished.

```{livecode}
PP2 (
    X (5),
    F (fn (X) (X plus (100))),
    print(F call (1)),
    print(X)
)
```

That prints `101 5`.

### Currying

Returned functions close over variables too. `M` receives `x`, then returns a
new function that receives `y`. The returned function carries the outer `x` with
it, so the second call can add `3` and `4`.

```{livecode}
PP2 (
    M (fn (x) (fn (y) (x plus (y)))),
    print(M call (3) call (4))
)
```

That prints `7`. This is the core of currying: one call returns a function
waiting for the next argument.

Currying can keep going. Each call supplies one value and returns the next
function until the final body has all three values.

```{livecode}
PP2 (
    F (fn (a) (fn (b) (fn (c) (a plus (b) plus (c))))),
    print(F call (1) call (2) call (3))
)
```

That prints `6`.

## Named top-level functions

`PP2_FN` gives a function a name at the top level. The shape after `PP2_FN` is
the same `(params) (body)` shape you know from a `fn` literal, and the name
resolves to an ordinary first-class `Fn` value inside PP2.

That means the name can be applied directly by writing arguments after it. This
definition creates `add`, then the PP2 program calls it with `2` and `3`.

```{livecode}
#define PP2_DEF_add PP2_FN (x, y) (x plus (y))

PP2 (
    print(add(2, 3))
)
```

That prints `5`.

A one-parameter named function is applied the same way.

```{livecode}
#define PP2_DEF_inc1 PP2_FN (x) (x plus (1))

PP2 (
    print(inc1(9))
)
```

That prints `10`.

### Composition

Named function applications are expressions, so one application can be an
argument to another. The inner `add(1, 1)` produces `2`, and the outer call adds
`3`.

```{livecode}
#define PP2_DEF_add PP2_FN (x, y) (x plus (y))

PP2 (
    print(add(add(1, 1), 3))
)
```

That prints `5`.

One named function can feed another in the same way. Here `dbl(10)` produces
`20`, then `inc1` adds `1`.

```{livecode}
#define PP2_DEF_inc1 PP2_FN (x) (x plus (1))
#define PP2_DEF_dbl PP2_FN (x) (x times (2))

PP2 (
    print(inc1(dbl(10)))
)
```

That prints `21`.

### Named functions as values

A named function is a value too. Assign it to a variable and call it with
`call`, the same as any stored function.

```{livecode}
#define PP2_DEF_add PP2_FN (x, y) (x plus (y))

PP2 (
    F (add),
    print(F call (4, 5))
)
```

That prints `9`. This works because `add` resolves to the same kind of `Fn`
value that a `fn` literal produces, the value the [Fn](types/fn) type page
introduces and that the stored-functions section above shows how to run.

## See also

- [Fn](types/fn)
- [Variables](variables)
```
