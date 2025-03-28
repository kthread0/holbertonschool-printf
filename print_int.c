#include "main.h"
#include <stdio.h>

/**
* print_int - converts a given integer into char, prints it and returns the total of characters printed.
* @num: the given integer.
*
* Return: the sum of all printed digits.
*/

int _print_int(int num){
    int acc = 0; /* holds amount of printed characters */
    int temp = num; /* holds num's digit amount */
    char *num_str = NULL; /* Array to store converted integers. */
    int i = 0;


    while (temp > 0){
        temp = temp / 10;
        acc++;
    }
    temp = num;
    num_str = num_str[acc + 1];
    num_str[acc] = '\0';

    for (i = acc - 1; i >= 0; i--){ /* -1 por el null terminator */
        num_str[i] = (temp % 10) + '0';
        temp /= 10;
    }


    /* Print each digit */
    for (i = 0; i < _strlen(num_str); i++)
    {
        _putchar(num_str[i]);
    }

    return (acc);
}
