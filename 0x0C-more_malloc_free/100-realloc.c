#include <stdlib.h>
#include "main.h"
/**
 * _realloc-function that reallocates
 * a memory block using malloc and free
 * @ptr:previously allocated space
 * @old_size:the size of the allocatd space
 * @new_size:the size of the memory
 * Return:a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *t;
	char *pc, *x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		t = malloc(new_size);

		if (t == NULL)
			return (NULL);

		return (t);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pc = ptr;
	t = malloc(sizeof(*pc) * new_size);

	if (t == NULL)
	{
		free(ptr);
		return (NULL);
	}

	x = t;

	for (i = 0; i < old_size && i < new_size; i++)
		x[i] = *pc++;

	free(ptr);
	return (t);
}
