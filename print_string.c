#include <stdio.h>
#include "main.h"

int _print_string(char *str)
{
    int acc = 0; /* Accumulator for printed characters */
    while (*str)
        acc += _putchar(*str++);
    return (acc);
}
