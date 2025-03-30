#include "main.h"
#include <stdbool.h>
#include <stdlib.h>

int _print_double(double num)
{
	bool is_negative = num < 0; /* Bool flag to handle negative numbers */
	double abs_num = is_negative ? -num : num;
	int whole_part = abs_num; /* Whole part of the number */
	int decimal_part = (abs_num - whole_part + 0.005) * 100; /* Separates the decimal part. */
	int length = is_negative + 1; /* the entire length of the number +1 for the comma*/
	int temp = 0;
	char *str; /* holds the converted number for printing */
	int i, j;

	/* Calculate whole part length */
	for (temp = whole_part; temp; temp /= 10)
		length++;
	length += 2; /* Two decimal digits */
    str = malloc(length + 1);
	if (!str)
		return (-1);
    i = 0;
	if (is_negative)
		str[i++] = '-';
	j = length - 3; /* Convert whole part */
	while (j >= is_negative)
	{
		str[j--] = (whole_part % 10) + '0';
		whole_part /= 10;
	}
	i = length - 3;
	str[i++] = '.';
	str[i++] = (decimal_part / 10) % 10 + '0';
	str[i++] = decimal_part % 10 + '0';
	str[i] = '\0';
	for (j = 0; str[j]; j++)
		_putchar(str[j]);
	free(str);
	return (length);
}
