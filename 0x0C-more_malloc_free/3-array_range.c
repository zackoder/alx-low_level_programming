#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *numarr;
	int i;
	i = 0;
	if (min > max)
	{
		return NULL;
	}
	
	numarr = malloc((max - min) * sizeof(int) + 1);
	if (numarr == NULL)
	{
		return NULL;
	}
	for (i = 0; min <= max; i++)
	{
		numarr[i] = min;
		min++;
	}
	return numarr;
}
