#include "main.h"

/**
 * _strcmp - compares two strings
 * return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (15);
	}
	else
	{
		return(-15);
	}
	return (0);
}
