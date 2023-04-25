#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>


int prnt_str(va_list args);
int prnt_ch(va_list args);
int check_func(char id, va_list args);
int _putchar(char c);
int _printf(const char *format, ...);



#endif
