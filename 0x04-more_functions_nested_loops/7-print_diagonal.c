#include "main.h"

/**
 * main - empty point
 * it doesn't retorn 0
 */
void print_diagonal(int n)
{
	int i, z;
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			_putchar('\n');
		else
		{
			for (z = 0 ; z < i ; z++)
				_putchar(32);
			_putchar('\\');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

