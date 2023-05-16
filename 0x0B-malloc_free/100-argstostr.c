#include <stdlib.h>
#include "main.h"
/**
 * argstostr-concat all the arguments of your program
 * @ac:count your arguments
 * @av:your arguments
 * Return: a pointe to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *t;
	int i, j, index, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
	}

	t = malloc(sizeof(char) * size + 1);

	if (t == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			t[index++] = av[i][j];
		}

		t[index++] = '\n';
	}

	t[size] = '\0';

	return (t);
}
