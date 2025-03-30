#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _print_int - converts a given integer into char,
*	prints it and returns the total of characters printed.
* @num: the given integer.
*
* Return: the sum of all printed digits.
*/
int _print_int(int num)
{
	int acc = 0, temp = num; /* acc: the string length */
				/*temp = used to calculate num's last digit */
	char *num_str = NULL; /* String to store converted integers. */
	int i = 0;

	while (temp > 0)
	{
		temp = temp / 10;
		acc++;
	}
	num_str = malloc(sizeof(char) * acc + 1);
	if (!num_str)
		return (EXIT_FAILURE);
	temp = num;
	num_str[acc] = '\0';
	for (i = acc - 1; i >= 0; i--) /* -1 por el null terminator */
	{
		num_str[i] = (temp % 10) + '0';
		temp /= 10;
	}
	for (i = 0; i < _strlen(num_str); i++)
	{
		_putchar(num_str[i]);
		acc++;
	}
	free(num_str);
	return (acc);
}
