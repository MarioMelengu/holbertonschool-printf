#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int (*find_handler(char format_char, specifier_t specifiers[]))(va_list)
{
	unsigned int i = 0;

	while (specifiers[i].specifier != NULL)
	{
		if (specifiers[i].specifier[0] == format_char)
		{
			return (specifiers[i].print);
		}
		i++;
	}
	return (NULL);
}

int process_format(const char *format, va_list args, specifier_t specifiers[])
{
	unsigned int i = 0;
	int len = 0;
	int (*handler)(va_list);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				len++;
				i++;
			}
			else
			{
				handler = find_handler(format[i + 1], specifiers);

				if (handler)
				{
					len += handler(args);
					i++;
				}
				else
				{
					_putchar('%');
					_putchar(format[i + 1]);
					len += 2;
					i++;
				}
			}
		}
		else 
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	return (len);
}

int _printf(const char *format, ...)
{
	va_list args;
	int len;

	specifier_t specifiers[] = {
		{"c", handle_char},
		{"s", handle_string},
		{NULL, NULL}
	};

	if (format == NULL || format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}

	va_start(args, format);
	len = process_format(format, args, specifiers);
	va_end(args);
}
