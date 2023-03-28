#include "main.h"

/**
 * main - empty point 
 * return 0
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tem;
	while (s[i++] != '\0')
	{
		j++;
	}
	for (j = i - 1; i >= j / 2; i--)
	{
		tem = s[i];
		s[i] = s[j - i -1];
		s[j - i -1] = tem;
	}
}
