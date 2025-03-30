#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a given string.
 * @str: the given string.
 *
 * Return: The length of @str.
 */
int _strlen(char *str)
{
	int str_len = 0; /* Holds the length of the given string */

	if (!str)
		return (0);
	while (str[str_len])
		str_len++;
	return (str_len);
}
