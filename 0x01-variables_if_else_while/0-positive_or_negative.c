#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* conditions in c */
/* betty style doc for function main goes there */


int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n > 0)
		{
			printf("%d is positive\n", n);
		}
	if (n == 0)
		{
			printf("%d is zer\n", n);
		}
	if (n < 0)
		{
			printf("%d is negative\n", n);
		}	
	return (0);
}
