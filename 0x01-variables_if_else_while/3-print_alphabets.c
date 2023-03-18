#include <stdio.h>


/*
 * main - alphabits uppercase
 * Return: 0
 */


int main(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	char b = 'A';
	while (b <= 'Z')
	{
		putchar(a);
		b++;
	}
	putchar('\n');
	return (0);
}
