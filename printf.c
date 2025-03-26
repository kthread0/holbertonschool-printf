#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int str_size = 0;
	int i = 0;

	if (!format)
		return (EXIT_FAILURE);
	va_start(args, format);
	/* Traversing @format till a specifier is found, if nothing is found,
	 * increment 'str_size' */
	for(; i < strlen(format); i++)
	{
		if (format[i] == '%')
		{
			i++;
			/* Increment 'i' to the adjacent index, if '%' is
			 * followed up by any of the specifiers, call a function
			 * to handle each case.
			 * WHERE: c = char(int).
			 * 	  s = char *.
			 * 	  i = int.
			 * 	  f = float.
			 * 	  d = double.
			 * */
			switch (format[i])
			{
				case 'c':
					/* Function to handle chars */
					break;
				case 's':
					break;
				case 'i':
				       	/* MIAMI */
					break;
				case 'd':
					break;
				case 'f':
					break;
				default:
					str_size++;
					/* no valid format is found.
					 * increment 'str_size' and print
					 * the '%' + char */
			}
		}
	}
	return (EXIT_SUCCESS) /* placeholder */
}
