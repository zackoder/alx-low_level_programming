#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code.
 *   *
 *    * Return: Always 0.
 *     */

int _isupper(int c);
int main(void)
{
	    char c;

	        c = 'm';
		    printf("%c: %d\n", c, _isupper(c));
		        c = 'N';
			    printf("%c: %d\n", c, _isupper(c));
			        return (0);
}
