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
	int i = 0; /* loop counter */
	int acc = 0; /* accumulator for each printed character */

	if (!format)
		return (EXIT_FAILURE);
	va_start(args, format);
    while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c': /* chars case */
					acc += _putchar(va_arg(args, int));
					break;
				case 's': /* string case */
                    acc += _print_string(va_arg(args, char *));
					break;
				case 'i': /* integer case */
					acc += _print_int(va_arg(args, int));
					break;
				case 'l': /* longs case */
                    /* call function for long format specifiers. */
					break;
				case 'd': /* double case */
					break;
				case 'f': /* float case */
					break;
				case '%': /* if what follows is another '%' case */
					acc += _putchar('%');
					break;
				default:
					/* if no viable specifier is found, print '%' and the next character */
					acc += _putchar('%');
					acc += _putchar(format[i]);
			}
		}
		else /* if no '%' if found, just print the current character. */
			acc += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (acc);
}
