#include "main.h"

/**
 * project done whit nouamane - mohamed 
 *
 * _printf - function that print any thing;
 *
 * @format: argument
 *
 * Return: number of character printed.
 */

int _printf(const char *format, ...)
{
	int x = 0, num_prnt = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			if (format[x] == '\0')
				return (-1);
		num_prnt += check_func(format[x], args);
		}
		else
		{
			num_prnt += _putchar(format[x]);
		}
		x++;
	}
	va_end(args);
	return (num_prnt);
}

