#include "main.h"
/**
 *swap_int- swap two number
 *@a: int number to swap
 *@b: other int num to be swap
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
