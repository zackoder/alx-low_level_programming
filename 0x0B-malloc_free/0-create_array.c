#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char*) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (arr == NULL)
		{
			return NULL;
		}
		arr[i] = c;
	}
	return (arr);
}
