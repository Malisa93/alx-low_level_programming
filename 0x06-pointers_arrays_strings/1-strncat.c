#include "main.h"
/**
 * _strncat-concatenates two stings
 * @dest:string to add to
 * @src:string to append to dest
 * @n:number of bytes contains in src
 * Return:a pointer to the resulting sting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
