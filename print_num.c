#include "main.h"

/**
 * print_num - Helper function to print a number recursively
 * @n: The unsigned integer to print
 * Return: Number of characters printed
 */
int print_num(unsigned int n) {
  int count = 0;

  if (n / 10)
    count += print_num(n / 10);

  count += _putchar((n % 10) + '0');

  return (count);
}
