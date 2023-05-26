#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings-function that print strings
 * @separator:is the sting to be printed between strings
 * @n:the arg to passed
 * @...:other arg to passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	char *str;
	unsigned int i;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(li, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(li);
}
