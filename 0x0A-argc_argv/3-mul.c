#include <stdio.h>
#include <stdlib.h>

/**
 * main-print multiplication of two numbers.
 *
 * @argc: numbr of arguments.
 * @argv: array of arg.
 *
 * Return: (0) success and (1) failed.
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
