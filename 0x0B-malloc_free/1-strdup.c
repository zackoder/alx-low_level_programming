#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int i;
	char *arr;
	if (str == NULL)
	{
		return NULL;
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	arr = malloc(i * sizeof(char));
	for (i = 0; str[i] != 0; i++)
	{
		arr[i] = str[i];
	}
	return arr;
}
