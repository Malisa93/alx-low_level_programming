#include "main.h"
/**
 * strlen_no_wildcard-return the lenght of a string and no wildcard
 * @s:the string to check
 * Return:the length of a string
 */
int strlen_no_wildcard(char *s)
{
	int len = 0, index = 0;

	if (*(s + index))
	{
		if (*s != '*')
			len++;

		index++;
		len += strlen_no_wildcard(s + index);
	}

	return (len);
}

/**
 * iterate_wildcard-loop through a string of wildcards only
 * @s:the string to loop through
 * Return: void
 */
void iterate_wildcard(char **s)
{
	if (**s == '*')
	{
		(*s)++;
		iterate_wildcard(s);
	}
}

/**
 * postfix_match-check the postfix of a string if it matches another
 * @str:the string to check
 * @postfix:the postfix to check
 * Return:a pointer
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wildcard(str) - 1;
	int postfix_len = strlen_no_wildcard(postfix) - 1;

	if (*postfix == '*')
		iterate_wildcard(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp-function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1:firstt string to compare
 * @s2:second string to compare
 * Return:an int of 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wildcard(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
