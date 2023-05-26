#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void _char(va_list arg);
void _int(va_list arg);
void _float(va_list arg);
void _string(va_list arg);
void print_all(const char * const format, ...);
/**
 * _char-prints a character
 * @arg:the arg passed
 */
void _char(va_list arg)
{
	char charact;

	charact = va_arg(arg, int);
	printf("%c", charact);
}

/**
 * _int-print an interger
 * @arg:the agr passed
 */
void _int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * _float-print a float
 * @arg:the arg passed
 */
void _float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * _string-print a string
 * @arg:the arg passed
 */
void _string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all-print all
 * @format:list arg passed
 * @...:other arg pssed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
