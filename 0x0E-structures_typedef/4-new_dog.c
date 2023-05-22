#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src to dest
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog-function that creates a new dog
 * @name:the name of the dog
 * @age:the age of the dog
 * @owner:ownership of the dog
 * Return:NULL if functio fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogman;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dogman = malloc(sizeof(dog_t));
	if (dogman == NULL)
		return (NULL);

	dogman->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogman->name == NULL)
	{
		free(dogman);
		return (NULL);
	}

	dogman->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogman->owner == NULL)
	{
		free(dogman->name);
		free(dogman);
		return (NULL);
	}

	dogman->name = _strcopy(dogman->name, name);
	dogman->age = age;
	dogman->owner = _strcopy(dogman->owner, owner);

	return (dogman);
}
