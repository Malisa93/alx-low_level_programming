#include <stdlib.h>
#include "main.h"
/**
 * w_length-pointer to the first word
 * @str: The string to point
 * Return: the first index pointing to the string
 */
int w_length(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * w_count-count num of works in the string
 * @str:the string to count
 * Return:the num of the string
 */
int w_count(char *str)
{
	int i = 0, w = 0, length = 0;

	for (i = 0; *(str + i); i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += w_length(str + i);
		}
	}

	return (w);
}

/**
 * strtow-function to splits a string into words
 * @str:the string to spilts
 * Return:a pointer to an array of a strings or NULL if fails
 */
char **strtow(char *str)
{
	char **t;
	int i = 0, w, j, l, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = w_count(str);
	if (w == 0)
		return (NULL);

	t = malloc(sizeof(char *) * (w + 1));
	if (t == NULL)
		return (NULL);

	for (j = 0; j < w; j++)
	{
		while (str[i] == ' ')
			i++;

		l = w_length(str + i);

		t[j] = malloc(sizeof(char) * (l + 1));

		if (t[j] == NULL)
		{
			for (; j >= 0; j--)
				free(t[j]);

			free(t);
			return (NULL);
		}

		for (k = 0; k < l; k++)
			t[j][k] = str[i++];

		t[j][k] = '\0';
	}
	t[j] = NULL;

	return (t);
}
