#include <stdio.h>

int main()
{
	printf("Size of a chat: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu byte(s)", sizeof(int));
	printf("Size of a long int: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)", sizeof(double));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return 0;
}
