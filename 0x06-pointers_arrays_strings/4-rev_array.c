#include "main.h"

/**
 * revers_array - it revers the index of a given array
 * it's a void funtion does't return anything
 * a - is an arry 
 * n is the size of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	for (i = 0; i < n / 2 ; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}

