# Recursion
### 🌱 What is Recursion?
Recursion is like the Russian doll of programming. Each problem is broken into smaller instances of itself until we reach a point where the problem is simple enough to be solved directly. It’s as if we call for help, and each time, the call gets smaller until the problem is solved in the simplest form. 🧩

To illustrate, imagine you're trying to find the last element in a list:

* If the list is just one item, that’s easy.
* But what if it’s many? You call the function again to deal with a smaller list, and so on, until you reach that one item.

### 🔍 Learning Objectives

* What recursion is: The process of solving a problem by breaking it down into smaller versions of itself.
* How to implement recursion: Writing functions that call themselves.
* When to use recursion: Great for problems that can be split into smaller, similar problems.
* When not to use recursion: Sometimes a loop or iteration is a better fit – and knowing when to choose that is key.

### 🛠️ Requirements
* Editors: You’re free to use vi, vim, or emacs.
* Compilation: All files should be compiled on Ubuntu 20.04 LTS using gcc with the flags: -Wall -Werror -Wextra -pedantic -std=gnu89.
* File Format: Make sure your files end with a newline (it’s all about keeping things neat!).
* Code Style: Stick to Betty style – the gold standard for clean code. We’ll check it with betty-style.pl and betty-doc.pl. 
* No Global Variables: Keep things local and organized.
* No Loops Allowed: This is a project about recursion, not iteration! 
* _putchar is Your Friend: You can use _putchar for printing, but don’t use standard library functions like printf or puts
* One Header to Rule Them All: All your function prototypes and the prototype for _putchar should be in main.h.

## Table of the Prototypes:

| **Prototype** | **Function** | **Description** |
|---------------|--------------|-----------------|
| `void _puts_recursion(char *s);` | _puts_recursion | Prints a string followed by a new line, using recursion. |
| `void _print_rev_recursion(char *s);` | _print_rev_recursion | Prints a string in reverse, followed by a new line, using recursion. |
| `int _strlen_recursion(char *s);` | _strlen_recursion | Returns the length of a string using recursion. |
| `int factorial(int n);` | factorial | Returns the factorial of a number `n` using recursion. |
| `int _pow_recursion(int x, int y);` | _pow_recursion | Returns `x` raised to the power of `y` using recursion. |
| `int _sqrt_recursion(int n);` | _sqrt_recursion | Returns the square root of a number `n` using recursion. |
| `int is_prime_number(int n);` | is_prime_number | Checks if `n` is a prime number using recursion. |
| `int is_palindrome(char *s);` | is_palindrome | Checks if a string `s` is a palindrome using recursion. |
| `int wildcmp(char *s1, char *s2);` | wildcmp | Compares two strings with wildcard characters (`*`) that match any sequence of characters. |




<p align="center"> <img src="https://media.giphy.com/media/AbDb2PniluFwY/giphy.gif" width="25%" /> </p>
🖥️ This project is part of my studies at Holberton School by Tuwaiq Academy <td><a href="https://tuwaiq.edu.sa/holberton">Holberton School by Tuwaiq Academy</a></td>
