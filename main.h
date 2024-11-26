#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct specifier_t
{
	char *specifier;
	void (*handler)(va_list args);
} specifier_t;


int _printf(const char *format, ...);
int _putchar(char c);

int (*find_handler(char format_char, specifier_t specifiers[]))(va_list);

int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);

#endif
