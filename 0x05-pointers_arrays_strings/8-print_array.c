#include "main.h"

/**
 * main - ha3ar rbi madirina shi7aja tnf3na 
 * return 0
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
		printf("\n");
}
