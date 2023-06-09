#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents, num_coins;
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}
	num_coins = 0;
	while (cents > 0) 
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		num_coins++;
	}
	printf("%d\n", num_coins);
	return 0;
}
