#include "main.h"
/**
 * _pow_recursion-print the result of a power of a number
 * @x:the number
 * @y:the power
 * Return:the result of the number raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
