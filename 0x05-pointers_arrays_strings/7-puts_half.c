#include "main.h"

/**
 * main - main d tb
 * retun 0
 */
void puts_half(char *str)
{
	int j = 0, k;
	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 ==1)
	{
		k = (j - 1) / 2;
		k++;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j ; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
