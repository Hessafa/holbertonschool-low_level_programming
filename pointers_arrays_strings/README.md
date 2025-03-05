## Pointers and Arrays

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

### Table of the Protypes: 

Here is the updated table with your new task:

| Task | Prototype | Description |
|------|-----------|-------------|
| 0 | `void reset_to_98(int *n);` | Takes a pointer to an int and updates the value it points to to 98. |
| 1 | `void swap_int(int *a, int *b);` | Swaps the values of two integers. |
| 2 | `int _strlen(char *s);` | Returns the length of a string. |
| 3 | `void _puts(char *str);` | Prints a string, followed by a new line, to stdout. |
| 4 | `void print_rev(char *s);` | Prints a string in reverse, followed by a new line. |
| 5 | `void rev_string(char *s);` | Reverses a string. |
| 6 | `void puts2(char *str);` | Prints every other character of a string, starting with the first character, followed by a new line. |
| 7 | `void puts_half(char *str);` | Prints the second half of a string. If the number of characters is odd, prints the last n characters, where n = (length_of_the_string + 1) / 2. |
| 8 | `void print_array(int *a, int n);` | Prints `n` elements of an array of integers, followed by a new line. The numbers must be separated by commas, followed by a space. |
| 9 | `char *_strcpy(char *dest, char *src);` | Copies the string pointed to by `src`, including the null byte, to the buffer pointed to by `dest`. |
| 10 | `int _atoi(char *s);` | Converts a string to an integer. |
| 11 | `char *_strcat(char *dest, char *src);` | Concatenates two strings. Appends the `src` string to the end of the `dest` string, including the null byte. |
| 12 | `char *_strncat(char *dest, char *src, int n);` | Concatenates the first `n` characters of the `src` string to the `dest` string, ensuring the result is null-terminated. |
| 13 | `char *_strncpy(char *dest, char *src, int n);` | Copies up to `n` characters from the `src` string to the `dest` string, ensuring the result is null-terminated. If `src` is shorter than `n`, the remaining characters in `dest` are padded with null bytes. |
| 14 | `int _strcmp(char *s1, char *s2);` | Compares two strings `s1` and `s2` and returns a negative integer if `s1` is lexicographically less than `s2`, 0 if they are equal, or a positive integer if `s1` is greater than `s2`. |
| 15 | `void reverse_array(int *a, int n);` | Reverses the content of an array of integers. |
| 16 | `char *string_toupper(char *);` | Converts all lowercase letters of a string to uppercase. |
| 17 | `char *cap_string(char *);` | Capitalizes all words in a string. Words are considered to be separated by any non-alphabetical character. |



## Table of Advanced Tasks Prototypes:

| Task           | Prototype                                      | Description                                                    |
|----------------|------------------------------------------------|----------------------------------------------------------------|
| Advanced Task 8 | `char *rot13(char *);`                         | Encodes a string using the ROT13 cipher.                       |
| Advanced Task 9 | `void print_number(int n);`                    | Prints an integer without using long, arrays, or pointers.     |
| Advanced Task 11 | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` | Adds two numbers represented as strings and stores the result in `r`. |
| Advanced Task 12 | `void print_buffer(char *b, int size);`        | Prints a buffer with a given size, formatted to show the content. |

