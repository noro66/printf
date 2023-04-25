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

	va_list arglist;

	va_start(arglist, format);
	const char *p = format;

	int (*f)(va_list);

	while (*p != '\0')
	{
		if (*p == '%')
		{
			if (*p == '\0')
				return (-1);

			len += *check_func(&p, args);
			else
			{
			num_prnt += _putchar(*p);
			continue;
			}
			p++;

			}

			va_end(arglist);
			return (num_prnt);
}

