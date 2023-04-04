#include "main.h"

/**
 * _strstr - that locates a substring
 * return char 
 */
char *_strstr(char *haystack, char *needle)
{
char *p1, *p2;
p1 = haystack;
if (*needle == '\0')
return (haystack);
while (*p1 != '\0')
{
p2 = needle;
if (*p1 == *p2)
{
char *p3 = p1;
while (*p3 == *p2 && *p3 != '\0' && *p2 != '\0')
{
p3++;
p2++;
}
if (*p2 == '\0')
return (p1);
}
p1++;
}
return (0);
}

