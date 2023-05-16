#include <stdlib.h>
#include "main.h"
/**
 * _strdup- A function that returns a
 * pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:the cpy of a string
 * Return:a pointer of the string and NULL if str is zero
 */
char *_strdup(char *str)
{
	char *t;

	int i, lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		lenght++;
	}

	t = malloc(sizeof(char) * (lenght + 1));

	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			t[i] = str[i];
		}

		t[lenght] = '\0';

		return (t);
	}
}
