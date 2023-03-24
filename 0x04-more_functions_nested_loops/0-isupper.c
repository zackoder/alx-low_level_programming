#include "main.h"

/**
 * main - that is the _isupper function it checkes if the letter is uppercase or 
 * lowercese
 * it returns 0
 */

int _isupper(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (1);
	}
	while (c >= 97 && c >= 122)
	{
		return (0);
	}
	return (0);
}
