#include <stdio.h>

/**
 * main alphabets excepte q and e
 * Return: 0
 */
int main(void)
{
	char b;
	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
		putchar('\n');
	return (0);
}
