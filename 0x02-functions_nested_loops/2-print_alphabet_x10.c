#include "main.h"
/*
 * main - yawlad l9a wash hadshi mashi description ?
 * return 0 
 */ 
void print_alphabet_x10(void)
{
	char c;
	int i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
