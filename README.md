# benchmark

It was originally writen for benchmark testing my programs in OI/ACM, but later found useful for small tests, maybe unit tests.

## How to use

Simply put your standard program into std.cc, unchecked program into src.cc and program that produces data into mk.cc.

Then run `./chk`

## Files introduction

`std` should always be right. It may be a simple brute-force or a carefully tested complex program.

`src` is the program you are going to have benchmark test.

`mk` makes input data for std and src.

`chk` is executor. It compiles and executes std and src, compares their outputs.

Folder `exe` stores compiled program. chk will not delete executable files.

Folder `data` stores input and output datas, you can check output when outputs of `std` and `src` differs.

## TODO

Well, this script can only test C++ program. If you want to test other language you will have to edit `chk` yourself.

And my origninal version accumulated lots of useful data maker. Maybe I will rewrite them one day in the future.(new flag)
