#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1len, s2len;
	char *concatstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL && s2 ==	NULL)
	{
		return NULL;
	}
	s1len = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	s2len = 0;
	for (i = 0; s2[i] != '\0';i++)
	{
		s2len++;
	}
	if ((s1len + s2len) >= (s1len + n))
	{
		concatstr = malloc((s1len + n) * sizeof(char) + 1);
		for (i = 0; s1[i] != '\0'; i++)
		{
			concatstr[i] = s1[i];
		}
		for (i = 0; i < n; i++)
		{
			concatstr[s1len + i] = s2[i];
		}
		concatstr[s1len + i + 1] = '\0';
	}
	else
	{
		concatstr = malloc((s1len + s2len) * sizeof(char) + 1);
		for (i = 0; s1[i] != '\0'; i++)
		{
			concatstr[i] = s1[i];
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			concatstr[s1len + i] = s2[i];
		}
		concatstr[s1len + i + 1] = '\0';
	}
	return concatstr;
}	
