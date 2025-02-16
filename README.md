<h1 style="font-size: 3em; ">Welcome to the World of C Programming</h1>
<p align="center"> <img src="https://media1.tenor.com/m/c6gKyfu4E_4AAAAd/typing-hello-kitty.gif" width="25%" /> </p>
This project is part of my studies at Holberton School, where I get to explore the exciting world of C programming and all things tech! 🖥️
It's time to get our hands dirty with some C code, compilation, and dive into the fun of printf, puts, and putchar! 🎉

# GCC Commands and Their Functions

This document contains a list of common GCC (GNU Compiler Collection) commands and their functions.

| **Command**            | **Function**                                                                                                                                     |
|------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| `gcc`                  | The basic command to compile C programs. It invokes the GCC compiler to compile C code into an executable.                                           |
| `gcc -o <output>`      | Specifies the name of the output file (executable). For example, `gcc -o myprogram main.c` creates an executable called `myprogram`.             |
| `gcc -c`               | Compiles the source code into an object file (`.o`), but does not link it into an executable. Example: `gcc -c main.c` produces `main.o`.         |
| `gcc -E`               | Runs the preprocessor on the source code. It outputs the preprocessed source code without compiling it further. Example: `gcc -E main.c`.        |
| `gcc -S`               | Generates assembly code from C code. This produces a `.s` file, which is the assembly language equivalent of the C code. Example: `gcc -S main.c`. |
| `gcc -Wall`            | Enables most commonly used warnings during compilation. Helps catch common programming mistakes. Example: `gcc -Wall main.c`.                    |
| `gcc -Wextra`          | Enables additional warnings beyond `-Wall`. This catches more subtle issues in the code. Example: `gcc -Wextra main.c`.                         |
| `gcc -g`               | Includes debugging information in the compiled executable, useful for using a debugger (like GDB). Example: `gcc -g main.c`.                   |
| `gcc -O1, -O2, -O3`    | Optimizes the code for performance. The higher the number (1 to 3), the more optimization is performed. Example: `gcc -O2 main.c`.              |
| `gcc -static`          | Links the program statically, meaning all libraries are included directly in the executable (no dynamic linking). Example: `gcc -static main.c`. |
| `gcc -shared`          | Creates a shared library (`.so`) from the source code. Example: `gcc -shared -o libmylib.so mylib.c`.                                            |
| `gcc -fPIC`            | Generates position-independent code, typically used when creating shared libraries. Example: `gcc -fPIC -shared -o libmylib.so mylib.c`.        |
| `gcc -I<dir>`          | Adds a directory to the list of directories to search for include files (`#include`). Example: `gcc -I /usr/local/include main.c`.              |
| `gcc -L<dir>`          | Adds a directory to the list of directories to search for library files (`-l`). Example: `gcc -L /usr/local/lib -lmylib main.c`.                 |
| `gcc -l<library>`      | Links the specified library with the program. Example: `gcc -o myprogram main.c -lm` links the math library (`libm.so`).                       |
| `gcc -v`               | Displays detailed information about the compilation process, including the version of GCC and the commands executed. Example: `gcc -v main.c`.  |
| `gcc -fno-common`      | Prevents the linking of variables that are declared as `extern` and used in multiple object files. Helps prevent "multiple definition" errors.    |
| `gcc -M`               | Generates makefile rules for dependencies. Example: `gcc -M main.c` creates a dependency list for the source file.                                 |
| `gcc --version`        | Displays the version of the GCC compiler. Example: `gcc --version`.                                                                               |



