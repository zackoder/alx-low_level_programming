#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int i, len = 0;
	char *s;
	if (str == NULL)
		return NULL;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return NULL;
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
