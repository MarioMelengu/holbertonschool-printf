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
			return (specifiers[i].handle);
		}
		i++;
	}
	return (NULL);
}
