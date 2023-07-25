#include "main.h"

/**
 * print_char - funct to print a single char
 * @args: list of variadic arg to be printed 
 *
 *return: the numberof char printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
