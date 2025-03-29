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
	char c; /* char holder for the char case */

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
					c = va_arg(args, int);
					acc += _putchar(c);
					break;
				case 's': /* string case */
                    _print_string(va_arg(args, char *));
					break;
				case 'i': /* integer case */
<<<<<<< HEAD
					int num = va_arg(args, int);
					acc += _print_int(num);
					break;
				case 'l': /* longs case */
                    /* call function for long format specifiers. */
					break;
=======
				{
					int num = va_arg(args, int);
					acc += _print_int(num);
					break;
				}
//				case 'd': /* double case */
//					break;
>>>>>>> af139295cf490516e95d3c4a61d3d0b232caa858
//				case 'f': /* float case */
//					break;
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
