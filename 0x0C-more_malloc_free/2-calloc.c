#include <stdlib.h>
#include "main.h"
/**
 * _calloc-function tha allocate memory for an array, using malloc
 * @nmemb:the array to allocate
 * @size: the size ot the array
 * Return: a pointer to the allocated memory or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *t;
	char *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t = malloc(size * nmemb);

	if (t == NULL)
	{
		return (NULL);
	}

	x = t;

	for (i = 0; i < (size * nmemb); i++)
	{
		x[i] = '\0';
	}

	return (t);
}
