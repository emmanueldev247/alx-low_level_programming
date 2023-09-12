# 0x00. C - Hello, World

In this project, I started learn about C language, I learned what happens when you type `gcc main.c`. I learned what an entry point is and how to use the betty linter (C style checker)


## Table of contents :book:
Files | Description
----- | -----------
[0-preprocessor](./0-preprocessor) | Script that runs a C file through the preprocessor and save the result into another file
[1-compiler](./1-compiler) | Script that compiles a C file but does not link
[2-assembler](./2-assembler) | Script that generates the assembly code of a C code and save it in an output file
[3-name](./3-name) | Script that compiles a C file and creates an executable named `cisfun`
[4-puts.c](./4-puts.c) | C program that prints exactly <span style="color: red;">"Programming is like building a multilingual puzzle</span>, followed by a new line

```c
#include <stdio.h>

int main() {
    printf("\033[31mProgramming is like building a multilingual puzzle\033[0m\n");
    return 0;
}
```

