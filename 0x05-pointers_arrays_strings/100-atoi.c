#include "main.h"

/**
 * main - wa3la 7bs 
 * return 0
 */
int _atoi(char *s)
{
	int c = 0, min = 1,isi = 0 ;
	unsigned int ni = 0;
	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
			c++;
	}
		ni *= min;
		return (ni);
}
