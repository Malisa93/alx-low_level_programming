#include "main.h"
/**
 * divisible-return if the number is divisible
 * @num:the number
 * @div:the divisible
 *Return:1 or 0 if the number is divisible or not
 */

int divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	else if (div == num / 2)
	{
		return (1);
	}
	else
	{
	return (divisible(num, div + 1));
	}
}

/**
 * is_prime_number-returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n:the number to return
 * Return:1 or 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else
	{
	return (divisible(n, div));
	}
}
