#include "main.h"
/**
 * factorial-print the factorial of a given number
 * @n:the given number to print
 * Return:factorial
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
