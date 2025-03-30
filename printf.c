#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Format string containing directives
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int acc;

	if (!format)
		return (-1);

	va_start(args, format);
	acc = handle_cases(format, args);
	va_end(args);

	return (acc);
}

/**
 * handle_cases - Handles format specifiers for _printf
 * @format: Format string containing directives
 * @args: va_list containing the value to print
 *
 * Return: Number of characters printed
 */
int handle_cases(const char *format, va_list args)
{
	int i = 0, acc = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);

			switch (format[i])
			{
				case 'c':
					acc += _putchar(va_arg(args, int));
					break;
				case 's':
					acc += _print_string(va_arg(args, char *));
					break;
				case 'i':
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
		{
			acc += _putchar(format[i]);
		}
		i++;
	}
	return (acc);
}

