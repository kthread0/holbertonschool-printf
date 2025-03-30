#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the directives
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, acc = 0; /* acc = accumulator for each printed character */

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case '\0': return (0);
				case 'c':
					acc += _putchar(va_arg(args, int));
					break;
				case 's':
					acc += _print_string(va_arg(args, char *));
					break;
				case 'i':
					acc += _print_int(va_arg(args, int));
					break;
				case 'd':
					acc += _print_int(va_arg(args, int));
					break;
				case '%':
					acc += _putchar('%');
					break;
				default:
					acc += _putchar('%');
					acc += _putchar(format[i]);
			}
		}
		else
			acc += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (acc);
}
