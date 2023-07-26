#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct types
{
	char *p;
	int (*f)(va_list);
} print_f;


int _printf(const char *format, ...);
int print_char(va_list args);
int _putchar(char c);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int (*get_func(const char *format))(va_list);





#endif /*_MAIN_H_*/
