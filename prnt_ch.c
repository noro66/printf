#include "main.h"






char prnt_ch(va_list arglst)
{
	char ch = va_arg(args,char);
	int num_pt = 0;
	
	if (ch)
	{
		num_pt = _putchar(ch);
	return (num_pt);
	}
	else
		return (0);
}
