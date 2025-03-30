#include "main.h"
#include <stdbool.h>
#include <stdlib.h>

int _print_double(double num)
{
    bool isNegative = false; /* Bool flag to handle negative numbers */
    int whole_part = (int) num;  /* Separate whole from decimal part by typecasting trunc */
    double decimal_part = num - whole_part;  /* Separates the decimal part. */
    int temp = 0; /* Holds the  */
    int whole_len = 0; /* holds the length of the whole part */
    int total_len = 0; /* the entire length of the number */
    char *str = (void *)0; /* Holds the converted number for printing */
    int i = 0, j = 0;

    if (num < 0)
    {
        isNegative = true;
        num = num * -1;
        total_len = 1; /* for the - symbol */
    }

    /* Count the length of the whole part */
    temp = whole_part;
    while (temp > 0) {
        temp = temp / 10;
        whole_len++;
    }

    total_len += whole_len + 4; /* 4 = 2 decimal points + 1 for the comma + 1 NULL T-800 */

    str = malloc(total_len);
    if (!str)
        return (EXIT_FAILURE);

    if (isNegative)
        str[i++] = '-';

    /* converting whole_part to string */
    for (j = whole_len - 1; j >= 0; j--)
    {
        str [i + j] = (whole_part % 10) + '0';
        whole_part = whole_part / 10;
    }
    i = i + whole_len;

    /*converting decimal_part to string */
    for (j = 0; j < 2; j++)
    {
        decimal_part = decimal_part * 10;
        str[i++] = ((int) decimal_part % 10) + '0';
    }
    str[i] = '\0';

    /* printing the converted double number */
    for (j = 0; j < _strlen(str); j++)
    {
        _putchar(str[j]);
    }

    return (total_len);
}
