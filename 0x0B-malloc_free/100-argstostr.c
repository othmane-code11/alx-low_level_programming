#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry.
 * @ac: integer input.
 * @av: double (2) pointer array.
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, n, e = 0, a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			a++;
	}
	a += ac;

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (n = 0; av[j][n]; n++)
	{
		str[e] = av[j][n];
		e++;
	}
	if (str[e] == '\0')
	{
		str[e++] = '\n';
	}
	}
	return (str);
}
