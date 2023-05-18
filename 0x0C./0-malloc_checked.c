#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked-allocates memory using malloc
 * @b:the number to allocate
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
