#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	if (nmemb == 0 && size == 0)
	{
		return NULL;
	}
	arr = malloc(nmemb * size);
	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return arr;
}
