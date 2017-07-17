# benchmark

It was originally writen for benchmark testing my programs in OI/ACM, but later found useful for small tests, maybe unit tests.

## How to use

Simply put your standard program into std.cc, unchecked program into src.cc and program that produces data into mk.cc.

Then simply run `./chk`

If you want to use different standard file like `brute-force.py`, invoke `./chk brute-force.py` instead, and output will be redirected to `log/brute-force`.

But if you want to use different source file, you have to set std at the same time. (I may add `getopt` one day, or rewrite this project with other language...)

The supported file extensions are c, cc, cpp, cxx, go, py, rb. You can add yours in function compile.

So, the pattern is

```bash
./chk [standard.ext [source.ext]]
```

## Files introduction

`std` should always be right. It may be a simple brute-force or a carefully tested complex program.

`src` is the program you are going to have benchmark test.

`mk` makes input data for std and src.

`chk` is executor. It compiles and executes std and src, compares their outputs.

Folder `bin` stores compiled program. chk will not delete executable files.

Folder `log` stores input and output data, you can check output when output of `std` and `src` differed.

## TODO

And my origninal version accumulated lots of useful data maker. Maybe I will rewrite them one day in the future.(new flag)

Execute executable files which need executor like `java` binaries are not supported at present, so script files needs sheband at the beginning. Maybe I will add one day.
