#include "main.h"
/*
 * main - prints the alphabets 
 * 
 * returncs 0
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
