# Writing PP2 documentation

Go read `docs/source/language/hello-world.md` before you write anything. That
page is the voice, and everything you write has to be able to sit next to it
without a seam showing. If you want to hear the same voice hold up over
something longer, read "Macros that Compute" in `G:\Writing\pp`. It's the same
author thinking out loud for pages at a stretch.

Here is the thing worth understanding first. Whatever you read just before you
write shapes how you write. If a set of instructions reads like a machine
assembled it, the prose that comes out the other end reads the same way. So I
have written this the way I would actually explain the job to you, and that is
the same way the docs should read.

## The voice

The author writes in full sentences that connect to one another and take the
reader somewhere. He talks to you directly, he is warm about it, and he is funny
when the material gives him an opening. There is a line in hello-world about the
C compiler not appreciating a floating `Hello World!` left sitting in the code,
and it is a real joke, dropped in without fuss. When something turns out to be
easy he says "It's that easy!" and means it. That warmth does real work. It is a
person who understands the thing explaining it to someone he wants to bring
along with him.

What he never does is write in antithesis, and this is the one habit worth being
blunt about, because every language model reaches for it constantly. Antithesis
is when you tell the reader what something is by first telling them what it is
not, or when you balance two clauses against each other to get a rhythm going.
"The condition is an expression, not a directive." "One branch runs and the
other stays silent." "It isn't that it fails; it's that it does nothing." The
moment you catch yourself building a sentence like that, stop and write the plain
version. Say what the condition is. Say what the taken branch does. The reader
came for the fact, and the fact stands better on its own two feet than leaning
against its own opposite.

Two smaller things in the same spirit. When something actually matters, give it
its own sentence and explain it, rather than folding it into a list of abstract
nouns and hurrying on. And keep the punctuation ordinary. A period does almost
everything you were about to hand to an em-dash or an arrow.

## Getting the facts right

You are not free to invent how a feature behaves. For everything in the language
there is a test under `test/tests`, and that test is the specification. Read it
first. The docstring at the top of each test file is usually a tight summary of
the feature, and the individual cases tell you exactly what goes in and what
comes out.

Two rules follow from this. Do not describe behavior that no test exercises; if
you are sure something is true but nothing tests it, leave a plain
`<!-- TODO -->` note for a human instead of asserting it. And every runnable
example you put on a page has to come straight from a test case, the same input
and the same output, so that the docs stay honest and we can check them later
against the suite.

## How a page is shaped

Open with a sentence or two that says what the thing is and when you would reach
for it. Then show it working, using the `{livecode}` directive so the example
actually compiles in the browser and prints its result, and walk through what
the reader is seeing. After the examples, explain how it behaves in real
paragraphs: the order things happen in, how calls chain, what the quiet edge
cases are. If the feature has a type or answers to introspection, show that
exactly as the test asserts it. Close with a short list of related pages.

That is a shape, not a cage. Follow the order and cover the ground, but let the
prose inside each part breathe.

## PP2 syntax to get right

Runnable code always lives inside `PP2 ( ... )`, and statements at the top level
are separated by commas. An operation on a value reads like `value op (arg)`, so
`true and (false)` and `6 times (7)` and `X gt (3)` are all the same shape. A
method that takes nothing still wears its empty parentheses, as in `true not()`
and `i inc()`. Those method chains read left to right. A quote is a parenthesized
run of tokens, like `(int foo();)`, and it sits there inert until something acts
on it. A local variable is a single letter, and you assign to it by calling it
like a function, `X ((...))` or `i (5)`, and read it back by naming it on its
own.

## Formatting the code in examples

Lay the code out the way you would lay out C. Never put more than one statement
on a line. A variable assignment like `X (5)` gets its own line, and when several
statements sit inside `PP2 ( ... )` each one goes on its own line with its comma
at the end, the way a semicolon ends a line in C. The parentheses that hold a
branch body work like braces. The opening one stays at the end of the line that
introduces the branch, the body is indented four spaces beneath it, and the
closing one sits on its own line. When one block leads into another, join them on
a single line the way C joins `} else {`, so you write `) else (` or
`) else if (cond) (`. Nesting indents another four spaces. The `if` page is the
worked example of all of this, so look there when you are unsure.

## The mechanical bits

Pages are MyST Markdown. A runnable example goes in a ` ```{livecode} ` block,
and it has to genuinely work, because it is compiled through godbolt when the
docs build. Code that is only there to illustrate, and is not meant to run, goes
in a plain ` ```c++ ` block. Link to another page with an ordinary Markdown link
to its path without the extension, like `[Quote](types/quote)`. Keep each
livecode block small, since every one of them is a network compile at build
time.

## Where to look

For the voice, hello-world.md and the essays in `G:\Writing\pp`. For how a
finished page tends to look, and for the PP2 syntax in practice, the quote, bool,
and variables pages under `docs/source/language`.
