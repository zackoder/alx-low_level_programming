#include <stdio.h>
/*
 *that is a programe in c shows users the some of the data type and how many bytes it needs
 * if it work it will return 0 
*/
int main(void)
{
	printf("Size of a chat: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(double));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return 0;
}
