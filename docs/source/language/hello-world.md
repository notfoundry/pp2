# Hello World!

Getting a simple program to compile is a good way to verify that you have pp2's includes set up properly. Let's start by writing a program that emits "Hello world!" when expanded by the compiler.

```{livecode}
PP2 (
    print(
        (Hello World!)
    )
)
```

The `PP2` macro is responsible for compiling your pp2 programs, and it is defined in the `<pp2/pp2.h>` header. For brevity, each code sample will have a `#include` for this header inserted automatically.
The entire pp2 program consists of a call to the function `print` with the tokens `(Hello World!)` passed as an argument; all code in the top-level scope is part of the main program, without needing an explicit `main` function as an entrypoint.

The `print` function will emit the tokens `Hello World!` into the source file being preprocessed. However, since that file is likely then going to be passed into a C or C++ compiler (which won't appreciate a floating ``Hello World!`` being present in the code), this program is not particularly helpful.
To see our program output, what we really need to do is write a metaprogram: A `Hello World!` program generator!

```{livecode}
PP2 (
    print((
        int main() {
            puts("Hello World!");
        }
    ))
)
```

Rather than emitting `Hello World!` directly into the source file, the program now generates a valid C source file that will print `Hello World!` when it is executed, and emits that generated program into the source file instead. It's that easy!