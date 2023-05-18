#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat-concatenates two strings
 * @s1:first string to concat
 * @s2:second string to concat
 * @n:the size to the string
 * Return:a pointer to the new allocated memory or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;

	unsigned int length = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
		length++;

	t = malloc(sizeof(char) * (length + 1));

	if (t == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (i = 0; s1[i]; i++)
	{
		t[length++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		t[length++] = s2[i];
	}

	t[length] = '\0';

	return (t);
}
