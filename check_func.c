#include "main.h"




int (*check_func(const char *p))(va_list)
{
	int i;
	int j;
	fnc_t array[]={
		{"c",prnt_ch(args)},
		{"s",prnt_str(args)},
		};

	for (i = 0; array[i].t != NULL ;i++)
	{
		if (*(chekers[i].t) == *p)
		{
			j += (array[i].f);
			break;
		}
		else 
		{
		j += _putchar('%');
		j += _putchar(id);
		break;
		}
	}
	return (j);
}
