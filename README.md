# C - PRINTF (Holberton School)

This project is a custom implementation of the `printf` function in C. The `_printf()` function can print various data types, such as characters, strings, integers, and decimals.

## Learning Objectives

The primary learning objectives of this project include:

- Understanding data structures (array of structs) and algorithms required to implement the `_printf` function.
- Using pointers to functions to handle different conversion specifiers.
- Implementing basic functionality for `%s` conversion specifier to print strings.
- Gaining knowledge of the main program flow and control structures.
- Distributing the workload among team members and collaborating effectively on the project.

## Structure and Algorithm

The `_printf` function is implemented in the `_printf.c` file. The function takes a format string and a variable number of arguments. The format string is a character string, beginning and ending in its initial shift state, if any. These arguments are placed using the percentage `%` operator.

The function uses an array of structs to store the conversion specifiers and their corresponding functions. The function then iterates through the format string and calls the appropriate function for each conversion specifier.

## Array of Struct with Pointers to Function

The array of structs used in the `_printf` function is defined in the `main.h` header file. Each struct contains a character representing the conversion specifier and a pointer to the corresponding function. For example, the struct for the `%s` conversion specifier contains the character `s` and a pointer to the `handle_string` function.

### Basic `%s` Function

The `handle_string` function is used to print strings in the `_printf` function. The function takes a string as an argument and prints it to stdout using the `_putchar` function.

## Compilation

To use this function, you need to clone this repository and compile the source files with `gcc`. For example:

```
git clone https://github.com/MarioMelengu/holbertonschool-printf.git
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Use & Examples
To use the function, you need to include the header file `main.h` in your source code and call the function with the following prototype:

`int _printf (const char *format, ...);`


The function returns the number of characters printed, or -1 if an error occurs.

The format string can contain plain text and format specifiers, which start with the % character. The format specifiers are replaced by the corresponding arguments passed to the function. 

For example:
```
_printf("Hello, %s!\n", "world"); /* prints "Hello, world!" */

_printf("%d + %d = %d\n", 1, 2, 3); /* prints "1 + 2 = 3" */
```
The following table shows the supported format specifiers and their meanings:

```
| Specifier | Output                     | Example            |
|-----------|----------------------------|--------------------|
| `%c`      | Single character           | `a`                |
| `%s`      | String of characters       | `Holberton Albania`|
| `%d` or `%i` | Signed decimal integer  | `1024`, `-1024`    |
```

    #include "main.h"

    int main(void)

    {
    
       char c = 'A'
       char *s = "Hello"
       int i = 42;
       double d = 3.14;

    _printf("This is a char: %c\n", c); /* prints "This is a char: A" */
    _printf("This is a string: %s\n", s); /* prints "This is a string: Hello" */
    _printf("This is an integer: %d\n", i); /* prints "This is an integer: 42" */
    _printf("This is a decimal: %.2f\n", d); /* prints "This is a decimal: 3.14" */
    return (0);
     }

## Files contained in this repository
Name	Information

`man_3_printf`	Man page of the `_printf()` function.

`main.h`	Header file with the data type struct, standard libraries and custom prototypes.

`_putchar.c`	Custom `putchar` function.

`print_functions.c`	Contains char, string, decimal and integer functions.

`_printf.c`	Function that check format and call another function it format match with character.

`_printf.c`	Main `printf` function file. Calls other functions.

## Authors

Desara Baroti
Mario Melengu
