#include "main.h"

int _print_integers(int num)
{
	int i = 0;
	char *str = NULL;

	while(num >= 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}

	i = 0;

	while(str)
	{
		_putchar(str[i]);			
	}

	return (num);
}
