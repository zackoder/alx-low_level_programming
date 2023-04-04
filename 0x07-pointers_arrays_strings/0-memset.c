#include "main.h"

/**
 * memset - it fills the memory whith the a constant byte
 * @s is a pointer point to a str
 * return chr
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
*(s + i) = b;
}
return (s);
}
