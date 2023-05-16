#include <stdlib.h>
#include "main.h"
/**
 * create_array-A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size:size of the string
 * @c:the string to initialize
 * Return: NULL if size is zerro or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *t;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(char) * size);

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			t[i] = c;
		}

		return (t);
	}
}
