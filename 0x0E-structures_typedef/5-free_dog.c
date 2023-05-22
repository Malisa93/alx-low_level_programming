#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog-function that frees dogs
 * @d:the structure of the dogs
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
