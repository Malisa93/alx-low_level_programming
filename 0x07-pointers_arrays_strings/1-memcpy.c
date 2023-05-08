#include "main.h"
/**
 * _memcpy-function that copies memory area
 * @dest:the destination area
 * @src:source of the memory
 * @n:the byte from memory space
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
