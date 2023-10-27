#include <stdio.h>

/**
 * main - print the num of arguments passed.
 * @argc: num of arguments.
 * @argv: list array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

