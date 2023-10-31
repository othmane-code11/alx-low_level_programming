#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid.
 *
 * @width: width input.
 * @height: height input.
 * Return: pointer to 2 dim array.
 */
int **alloc_grid(int width, int height)
{
	int **mw;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mw = malloc(sizeof(int *) * height);

	if (mw == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mw[i] = malloc(sizeof(int) * width);

		if (mw[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mw[i]);

			free(mw);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mw[i][j] = 0;
	}

	return (mw);
}
