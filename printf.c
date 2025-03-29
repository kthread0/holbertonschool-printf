#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to a format string
 * @format: Character string containing directives
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...) {
  va_list args;
  int i = 0, count = 0;

  if (format == NULL)
    return (-1);

  va_start(args, format);

  while (format && format[i]) {
    if (format[i] == '%' && format[i + 1] != '\0') {
      i++;
      if (format[i] == 'c')
        count += print_char(args);
      else if (format[i] == 's')
        count += print_string(args);
      else if (format[i] == '%')
        count += print_percent(args);
      else {
        /* Unsupported specifier - print as is */
        count += _putchar('%');
        count += _putchar(format[i]);
      }
    } else if (format[i] == '%' && format[i + 1] == '\0') {
      /* Handle case where % is the last character */
      return (-1);
    } else
      count += _putchar(format[i]);
    i++;
  }

  va_end(args);
  return (count);
}
