#include "main.h"

/**
 * _puts-recursion prints a string, followed by a new line
 * it's a void function 
 * @s i sa string
 */ 
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
