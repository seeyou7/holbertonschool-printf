#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int y = 0, count = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[y + 1])
		return (-1);

	while (format[y])
	{
		if (format[y] == '%')
		{
		if (format[y + 1])
		{
		if (format[y + 1] != 'c' && format[y + 1] != 's'
		&& format[y + 1] != '%' && format[y + 1] != 'd'
		&& format[y + 1] != 'i')
	{
		count += _putchar(format[y]);
		count += _putchar(format[y + 1]);
		y++;
	}
	else
	{
		f = get_func(&format[y + 1]);
		count += f(args);
		y++;
	}
	}
	}
	else
	{
	_putchar(format[y]);
	count++;
	}
	y++;
	}
	va_end(args);
	return (count);
}
