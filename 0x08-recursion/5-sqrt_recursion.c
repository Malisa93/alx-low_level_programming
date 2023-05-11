#include "main.h"

int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt-return the natural square root
 * @num:the number to square root
 * @root:the square root
 * Return:the natural square root
 */
int _sqrt(int num, int root)
{
	int i = root * root;

	if (root == num / 2)
	{
		return (-1);
	}
	else if (i == num)
	{
		return (root);
	}
	else
	{
		return (_sqrt(num, root + 1));
	}
}

/**
 * _sqrt_recursion-print the natural square root of a number
 * @n:the number
 * Return:the natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
