#include "main.h"
/**
 * main - output the absolute value of a integer
 * returns 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= (-1);
		return (i);
	}
	else 
	{
		return (i);
	}
	return (0);
}
