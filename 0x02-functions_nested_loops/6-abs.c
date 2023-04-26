#include "main.h"
/**
 * _abs-print the absolute value of an integer
 * @n:the absolute value
 * Return:n if n is greater than or equal to 0, -n if n if less than to zero
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
