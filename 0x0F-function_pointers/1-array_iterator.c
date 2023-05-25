#include "function_pointers.h"
/**
 * array_iterator-function that executes
 * a function given as a parameter on each element of an array
 * @array:the arrray of the function
 * @size:the size to the array
 * @action:the function to point to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
