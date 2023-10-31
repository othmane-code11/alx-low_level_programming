#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location.
 * @str: char.
 * Return: 0 (success).
 */
char *_strdup(char *str)
{
	char *ant;
	int u, r = 0;

	if (str == NULL)
		return (NULL);
	u = 0;
	while (str[u] != '\0')
		u++;

	ant = malloc(sizeof(char) * (u + 1));

	if (ant == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ant[r] = str[r];

	return (ant);
}

