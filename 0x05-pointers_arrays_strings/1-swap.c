#include "holberton.h"

/**
  * swap_int - Swap the two numbers.
  * @a: number one.
  * @b: number two.
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
