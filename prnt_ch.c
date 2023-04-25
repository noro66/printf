#include "main.h"

char prnt_ch(va_list arglist)
{
	char ch = va_arg(arglist,char);
	int num_pt = 0;

	if (ch)
	{
		num_pt = _putchar(ch);
	return (num_pt);
	}
	else
		return (0)
}
