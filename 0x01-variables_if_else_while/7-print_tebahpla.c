#include <stdio.h>

/*
 * main - prints numbers from 0 to 9
 * if it's right it will return 0 if not it will return 1
 * */
int main(void)
{
	int n = 0;
	for (n ; n < 10; n++)
		putchar(n);
	putchar("\n");
	return (0);
