#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* handle_char - Handles the %c specifier in _printf
* @args: A va_list containing the argument to print
*
* Return: The number of characters printed (always 1 for a single char)
*/

int handle_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return(1);
}

/**
* handle_string - Handles the %s specifier in _printf
* @args: A va_list containing the string to print
*
* Return: The number of characters printed
*/

int handle_string(va_list args)
{
	unsigned int i;
	char *s;

	s = va_arg(args, char*);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
