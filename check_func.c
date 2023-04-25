#include "main.h"

/*** this project done with nouamane - mohamed .***/

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

	/* the fuction printf takes you her if the format is not a regulare text*/
	 /* to print the arlist , it depens on the type*/
	 /* of argument that spesefied by the user.*/
	/* the user spesesier the type by print '%'*/
	/*and a character of a sign.*/

	switch (id)
	{
	case 'c':/*if that character is a 'c' the function take you another function*/
		/* theat types the arlist in character type.*/
		i += prnt_ch(args);
		break;
	case 's':	/* if 's' to ... strintgs type.*/
		i += prnt_str(args);
		break;
	case '%':	/*just type the same '%',*/
		i += _putchar('%');
		break;
	case 'd':
	case 'i':/* if ... 'd || i' .. integers type */
		i += prnt_int(args);
		break;
	default:/* if the user types onther character it prints '%',*/
	       /*and that character.*/
		i += _putchar('%');
		i += _putchar(id);
		break;
	}
	return (i);
}
