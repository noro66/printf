#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int prnt_ch(va_list arglist);
int prnt_str(va_list arglist);
int prnt_cnt(va_list arglist);
int (*check_func(const char*))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);

typedef struct fnc{
	char *t;
	int (*f)(va_list);
}fnc_t;

#endif
