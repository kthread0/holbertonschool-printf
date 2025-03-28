#include "main.h"
#include <stdlib.h>

int _strlen(char *str)
{
    int str_len = 0; /* Holds the length of the given string */

    if (!str)
        return (0);

    while (str[str_len])
        str_len++;

    return (str_len);
}
