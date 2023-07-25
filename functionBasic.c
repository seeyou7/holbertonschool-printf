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

/**
 * print_string - funtion that print string
 * @args: va_list contanting string to be printed
 *
 * Return: string 
 */

int print_string(va_list args)
{
	int i;

	char *str = va_arg(args, char *)

		if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);

}
