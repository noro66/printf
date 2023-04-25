#include "main.h"

/**
 * check_func - manage switch cases
 * @id : first argument
 * @args : second argument
 *
 * Return: integer
 */

int check_func(char id, va_list args)
{
	int i = 0;

	switch (id)
	{
	case 'c':
		i += prnt_ch(args);
		break;
	case 's':
		i += prnt_str(args);
		break;
	case '%':
		i += _putchar('%');
		break;
	default:
		i += _putchar('%');
		i += _putchar(id);
		break;
	}
	return (i);
}
