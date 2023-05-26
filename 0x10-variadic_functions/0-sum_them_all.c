#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all-function that returns the sum of all its parameters
 * @n:the arg
 * @...:other arg
 * Return:the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	unsigned int i, sum = 0;

	va_start(li, n);

	for (i = 0; i < n; i++)
		sum += va_arg(li, int);

	va_end(li);

	return (sum);
}
