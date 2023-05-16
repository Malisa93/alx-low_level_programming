#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a
 * two dimensional array of integers
 * @width:row of the array
 * @height:col of the array
 * Return:a pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{

	int i, j;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);

		if (t[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(t[i]);
			}

			free(t);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}

	return (t);
}

