#include "main.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
        int j = 0, count = 0;
        int (*f)(va_list);
        va_list args;

        va_start(args, format);
        if (format == NULL || !format[j + 1])
                return (-1);

        while (format[j])
        {
                if (format[j] == '%')
                {
                if (format[j + 1])
                {
                if (format[j + 1] != 'c' && format[j + 1] != 's'
                && format[j + 1] != '%' && format[j + 1] != 'd'
                && format[j + 1] != 'i')
        {
                count += _putchar(format[j]);
                count += _putchar(format[j + 1]);
                j++;
        }
        else
        {
                f = get_func(&format[j + 1]);
                count += f(args);
                j++;
        }
        }
        }
        else
        {
        _putchar(format[j]);
        count++;
        }
        j++;
        }
        va_end(args);
        return (count);
}

