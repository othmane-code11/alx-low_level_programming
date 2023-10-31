#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string.
 * @st: string to evaluate.
 *
 * Return: num of words.
 */
int count_word(char *st)
{
	int f, a, y;

	f = 0;
	y = 0;

	for (a = 0; st[a] != '\0'; a++)
	{
		if (st[a] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - splits a string into words.
 * @str: string to split.
 *
 * Return: pointer to an array of strings (success).
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, w = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[w] = tmp - c;
				w++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}

	matrix[w] = NULL;

	return (matrix);
}
