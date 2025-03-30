#include <stdio.h>
#include "main.h"
/**
 * _print_string - prints the given string to the standard output.
 * @str: the given string.
 *
 * Return: the number of printed characters.
 */
int _print_string(char *str)
{
	int acc = 0; /* Accumulator for printed characters */

	if (!str)
		return ("(nil)");
	while (*str)
		acc += _putchar(*str++);
	return (acc);
}
