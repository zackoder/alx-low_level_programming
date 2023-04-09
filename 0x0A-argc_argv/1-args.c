#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	printf("%d\n", argc - 1);
	for (i = 0; i < argc ; i++)
	{
		return (*argv[i]);
	}
	return (0);
}
