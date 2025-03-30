#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_to_str - converts a given integer to  string.
 * @num: the given integer.
 *
 * Return: pointer to the string.
 */
char *int_to_str(int num)
{
	int acc = 0, temp = num;
	char *num_str;
	int i;

	if (num == 0)
	{
		num_str = malloc(2 * sizeof(char));
		if (!num_str)
			return (NULL);
		num_str[0] = '0';
		num_str[1] = '\0';
		return (num_str);
	}
	while (temp > 0)
	{
		temp /= 10;
		acc++;
	}
	num_str = malloc(sizeof(char) * (acc + 1));
	if (!num_str)
		return (NULL);
	temp = num;
	num_str[acc] = '\0';
	for (i = acc - 1; i >= 0; i--)
	{
		num_str[i] = (temp % 10) + '0';
		temp /= 10;
	}
	return (num_str);
}
/**
 * _print_int - prints an integer and returns the total characters printed.
 * @num: the given integer.
 *
 * Return: the sum of all printed digits.
 */
int _print_int(int num)
{
	char *num_str;
	int i, acc = 0;

	num_str = int_to_str(num);
	if (!num_str)
		return (EXIT_FAILURE);
	for (i = 0; num_str[i] != '\0'; i++)
	{
		_putchar(num_str[i]);
		acc++;
	}
	free(num_str);
	return (acc);
}
