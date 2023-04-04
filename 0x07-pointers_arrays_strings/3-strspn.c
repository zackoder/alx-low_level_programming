#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * return unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p;
for (; *s != '\0'; s++)
{
for (p = accept; *p != '\0'; p++)
{
if (*s == *p)
{
count++;
break;
}
}
if (*p == '\0')
{
return count;
}
}
return count;
}
