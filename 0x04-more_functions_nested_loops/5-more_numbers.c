#include "main.h"

/**
 * main - empty point
 * return 0
 */

void more_numbers(void)
{
	int i, z, j, d;
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				d = j % 10;
				z = (j - d) / 10;
				_putchar(z + '0');
				_putchar(d + '0');
			}
		}
		_putchar('\n');
	}
}
