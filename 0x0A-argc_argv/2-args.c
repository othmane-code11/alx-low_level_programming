#include <stdio.h>

/**
 * main - prints all arg it receives.
 * @argc: num of arguments.
 * @argv: array of arg.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

