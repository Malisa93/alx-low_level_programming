#include <stdlib.h>
#include "main.h"
/**
 * str_concat-function that concatenates two string
 * @s1:first string to concat
 * @s2:second string ot concat
 * Return:two strings put together
 */
char *str_concat(char *s1, char *s2)
{
	char *t;

	int i, length = 0, x = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}

	t = malloc(sizeof(char) * length);

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
			t[x++] = s1[i];
		}
		for (i = 0; s2[i]; i++)
		{
			t[x++] = s2[i];
		}

		return (t);
	}
}
