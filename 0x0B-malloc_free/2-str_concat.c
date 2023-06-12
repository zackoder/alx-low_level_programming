#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i, s1len, s2len, slen;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	s2len = 0;
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2len++;
	}

	slen = s1len + s2len + 1;
	arr = malloc(slen * sizeof(char));
	
	if (arr == NULL)
	{
		return NULL;
	}
	for (i = 0; s1[i] != '\0';i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0';i++)
	{
		arr[s1len + i] = s2[i];
	}
	arr[slen + 1] = '\0';
	return arr;
}
