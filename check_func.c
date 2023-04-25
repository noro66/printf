#include "main.h"




int (*check_func(const char *p))(va_list)
{
	int i;

	fnc_t chekers[4]={
		{"c",prnt_ch},
		{"s",prnt_str},
		{"i",prnt_int},
		{"d",prnt_int},
		{NULL,NULL},
				};
	for (i = 0;chekers[i].t != NULL ;i++)
	{
		if (*(chekers[i].t) == *p)
			return (chekers[i].f);
	}
}
