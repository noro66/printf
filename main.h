#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/*this fonction prints string in the arglist at the  body of the text.*/
int prnt_str(va_list args);

/* this fonction prints character in the arlist at the body of the text.*/
int prnt_ch(va_list args);

/* that fonction cheks the type of the argument and take you to*/
/* the right fonction to type arglist with.*/
int check_func(char id, va_list args);

/*that is the famous putchar that print the caracter,*/
/*and return (1) if there is non caracter returns (-1).*/
int _putchar(char c);

/* and this is main fonction printf that printf what you put inside her */
/* and return the number of character printed.*/
int _printf(const char *format, ...);




#endif
