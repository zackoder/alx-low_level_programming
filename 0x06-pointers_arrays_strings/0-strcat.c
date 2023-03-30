#include "main.h"
#include <stdio.h>
/**
 * _strcat  - its a functuon that concatenates two strings
 * return 0
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
