#include "main.h"

/**
 * print_int - Prints an integer
 * @args: va_list containing the integer to print
 * Return: Number of characters printed
 */
int print_int(va_list args) {
  int n = va_arg(args, int);
  int count = 0;
  unsigned int abs_val;

  if (n < 0) {
    count += _putchar('-');
    abs_val = -n;
  } else
    abs_val = n;

  /* Handle case for 0 */
  if (abs_val == 0)
    return (count + _putchar('0'));

  /* For numbers > 0, recursively print digits */
  if (abs_val / 10)
    count += print_num(abs_val / 10);

  count += _putchar((abs_val % 10) + '0');

  return (count);
}
