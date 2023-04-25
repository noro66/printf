#include "main.h"


/*** this project done whit nouamane - mohamed.***/

/**
 * prnt_str - manage the 's' case
 *
 * @args: The first argument
 * Return: integer
 */
int prnt_str(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
