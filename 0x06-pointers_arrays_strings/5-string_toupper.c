#include "main.h"

/**
 * string_toupper - it takes a lowercase letter and makes it uppercase
 * return char
 */

char *string_toupper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}
