#include "main.h"

/*** this project done whit nouamane - mohamed .***/

/**
 * prnt_ch - manage the case c
 * @args : the first argument
 * Return: integer
 */

int prnt_ch(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
