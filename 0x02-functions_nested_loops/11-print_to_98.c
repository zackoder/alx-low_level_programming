#include <stdio.h>
#include "main.h"

/**
 * main - prints the num 98 if the num equals 98 
 * and it count down if the num is greter than 98
 * and it incres the value to 98 if the num is less than 98
 * returns (0)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		while (n  > 98)
		{
			printf("%d, ", n--);
		}
		printf("98\n");
	}
}

