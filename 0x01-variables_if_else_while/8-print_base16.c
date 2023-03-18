#include <stdio.h>

/**
 * main - alphabet from 0 to 9 and from a to f
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        putchar(i + '0');

    for (i = 'a'; i <= 'f'; i++)
        putchar(i);

    putchar('\n');

    return 0;
}

