#include "main.h"
/**
 * stringlen-find the length of the string
 * @s:the string to find
 * Return:the length of the string
 */

int stringlen(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + stringlen(s + 1);
	}
	return (length);
}

/**
 * find_palindrome-find a palindrome in a string
 * @s:the string to check
 * @length:the length of the string
 * @index:the index to be checked
 * Return:1 if a string is a palindrome and 0 if not
 */
int find_palindrome(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
	{
		return (1);
	}
	else if (s[index] == s[length - index - 1])
	{
		return (find_palindrome(s, length, index + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome-return 1 if a string is a palindrome and 0 if not
 * @s:the string to check
 * Return:0 or 1
 */
int is_palindrome(char *s)
{
	int index = 0;
	int length = stringlen(s);

	if (!(*s))
		return (1);

	return (find_palindrome(s, length, index));
}
