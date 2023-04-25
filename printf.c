#include "main.h"
/**
 * _printf - function that print any thing;
 *
 * @format: argument
 *
 * Return: number of character printed.
 */

int _printf(const char *format, ...)
{
	int num_prnt = 0;
	
	if (!format)
		return (-1);

	va_list args;

	va_start(args, format);
	const char *p = format;

	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			if (*p == '\0')
				return (-1);

			num_prnt += check_func(*p, args);
		}
		else
		{
		num_prnt += _putchar(*p);
		}
		p++;

		}

			va_end(args);
			return (num_prnt);
}

