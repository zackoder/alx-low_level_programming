#include "main.h"

/**
 * _strchr - locales a character in a string
 * return  char
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return s;
}
s++;
}
return NULL;
}
