#include <stdio.h>

void myfunction(void) __attribute__ ((constructor));

/**
  * myfunction - Print a string before the main.
  * Return: void.
  */
void myfunction(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
