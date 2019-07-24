#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - Print Array.
  * @array: Array.
  * @size: Size of the array.
  * @action: Function.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
