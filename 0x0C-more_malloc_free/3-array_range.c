#include <stdlib.h>
#include "main.h"
/**
 * array_range-function that create an array of integers
 * @min:lowers value
 * @max:highest value
 * Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *t, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	t = malloc(sizeof(int) * size);

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		t[i] = min++;
	}

	return (t);
}
