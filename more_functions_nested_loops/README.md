## **C - More functions, more nested loops**

* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
* What are header files and how to to use them with #include


**Table of the Protypes:**

| **Task**                          | **Function Prototype**             | **Description**                                                                 |
|------------------------------------|-------------------------------------|---------------------------------------------------------------------------------|
| **0. Check for Uppercase**         | `int _isupper(int c);`              | Checks if the character `c` is uppercase. Returns 1 if true, 0 otherwise.        |
| **1. Check for a Digit**          | `int _isdigit(int c);`              | Checks if the character `c` is a digit (0 through 9). Returns 1 if true, 0 otherwise. |
| **2. Multiply Two Integers**      | `int mul(int a, int b);`            | Multiplies two integers `a` and `b` and returns the result.                      |
| **3. Print Numbers**              | `void print_numbers(void);`        | Prints the numbers from 0 to 9, followed by a new line. Can only use `_putchar` twice. |
| **4. Print Most Numbers**         | `void print_most_numbers(void);`   | Prints the numbers from 0 to 9, excluding 2 and 4, followed by a new line. Can only use `_putchar` twice. |
| **5. Print 10 Times the Numbers** | `void more_numbers(void);`         | Prints the numbers from 0 to 14, 10 times, followed by a new line. Can only use `_putchar` three times. |
| **6. Draw a Straight Line**       | `void print_line(int n);`          | Draws a straight line in the terminal with `_` character. Ends with a newline (`\n`). If `n` is 0 or less, only prints a newline. |
| **7. Draw a Diagonal Line**       | `void print_diagonal(int n);`      | Draws a diagonal line in the terminal with '\\' character. Ends with a newline (`\n`). If `n` is 0 or less, only prints a newline. |
| **8. Print a Square**             | `void print_square(int size);`     | Prints a square using the '#' character, followed by a new line. If `size` is 0 or less, prints only a new line. |
| **9. Print a Triangle**           | `void print_triangle(int size);`   | Prints a right-aligned triangle using the '#' character, followed by a new line. If `size` is 0 or less, it prints only a new line. |
| **Advanced 12. Print an Integer** | `void print_number(int n);`        | Prints an integer using the `_putchar` function. Handles negative numbers and recursion for digit-by-digit printing. |


| **Prototype** | **Function** | **Description** |
| --- | --- | --- |
| `int _isupper(int c);` | `_isupper` | Checks if `c` is an uppercase letter. Returns `1` if true, `0` otherwise. |
| `int _isdigit(int c);` | `_isdigit` | Checks if `c` is a digit (0-9). Returns `1` if true, `0` otherwise. |
| `int mul(int a, int b);` | `mul` | Multiplies two integers `a` and `b`. Returns the result. |
| `void print_numbers(void);` | `print_numbers` | Prints numbers from `0` to `9`, followed by a new line. |
| `void print_most_numbers(void);` | `print_most_numbers` | Prints numbers from `0` to `9`, excluding `2` and `4`, followed by a new line. |
| `void more_numbers(void);` | `more_numbers` | Prints numbers from `0` to `14`, **10 times**, each followed by a new line. |
| `void print_line(int n);` | `print_line` | Draws a straight line using the `_` character `n` times, followed by a new line. |
| `void print_diagonal(int n);` | `print_diagonal` | Draws a diagonal line using the `\\` character `n` times, followed by a new line. |
| `void print_square(int size);` | `print_square` | Prints a square of size `size x size` using the `#` character. |
| `void print_triangle(int size);` | `print_triangle` | Prints a right-aligned triangle of size `size` using the `#` character. |
| `void print_number(int n);` | `print_number` | Prints an integer `n` using `_putchar`. Handles `INT_MIN` as a special case. |
| `int _putchar(char c);` | `_putchar` | Writes a character `c` to stdout. Returns `1` on success, `-1` on error. |

---
