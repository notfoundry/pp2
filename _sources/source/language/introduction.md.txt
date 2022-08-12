# Introduction

PP2 is an imperative, C-syntax code generation language designed to be interpreted inside the C Preprocessor.

This guide assumes that you are already familiar with the C or C++ programming languages, given that every PP2 program is by definition valid C source code.
That being said, having any amount of programming knowledge under your belt from another language such as Python, Java, C#, or Rust is likely sufficient.

To start using PP2, you first need to [download the header-only PP2 library](https://github.com/notfoundry/pp2) and add it to your C compiler include path.
Once that is done, add the main PP2 header to your C source file, like so:

```c++
#include "pp2/pp2.h"
```

When your C compiler resolves that include successfully, that means you're good to go! Run the PP2 compiler on your PP2 metaprograms using the `PP2` macro:

```c++
#include "pp2/pp2.h"

PP2 (
    print(( int squares[] { )),
    for (i (0), i less (32), i inc()) (
        print( (,) , i times (i) )
    ),
    print(( } ))
)
```