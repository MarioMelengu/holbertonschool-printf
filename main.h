#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specifier_t
{
	char *specifier;
	int (*print)(va_list args);
} specifier_t;


int _printf(const char *format, ...);
int _putchar(char c);

int (*find_handler(char format_char, specifier_t specifiers[]))(va_list);
int process_format(const char *format, va_list args, specifier_t specifiers[]);

int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int print_number(long int number);

#endif
