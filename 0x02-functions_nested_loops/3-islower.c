#include "main.h"
/* main - checks if the character is lowercase 
 * returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	return 0;
}
