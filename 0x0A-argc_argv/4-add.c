#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of args.
 * @argv: array of args.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
		{
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
