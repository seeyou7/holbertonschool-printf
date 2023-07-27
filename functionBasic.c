#include "main.h"

/**
 * print_char - funct to print a single char
 * @args: va_list args
 *
 *Return: 1
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

	char *str = va_arg(args, char *);

		if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	return (i);

}

/**
 * print_percent - func to print the char "%"
 * @args: list of variadic argument
 *
 * Return: 1
 */

int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}


/**
 * print_number - print integer
 *
 * @args: list of variadic arguments
 * Return: length of string
 */

int print_number(va_list args)
{
	long int n;
	int len = 0;
	long int div = 1;

	n = va_arg(args, int);
	if (n < 0)
	{
		len += _putchar('-');
		n *= -1;
	}

	while ((n / div) > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
	return (len);

}
