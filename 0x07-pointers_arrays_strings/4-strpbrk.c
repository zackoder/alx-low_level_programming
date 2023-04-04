#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * return char
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s)
{
for (p = accept; *p; p++)
{
if (*s == *p)
{
return s;
}
}
s++;
}
return NULL;
}

