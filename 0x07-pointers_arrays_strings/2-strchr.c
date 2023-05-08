#include "main.h"
/**
 * _strchr-function to locate a character in a string
 * @s:string to searching the character
 * @c:charcter to find
 * Return:pointer to the char in the string s or NULL if char does not exit
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
