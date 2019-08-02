#include <stdio.h>

void myfunction(void) __attribute__ ((constructor));

/**
  * myfunction - Print a string before the main.
  * Return: void.
  */
void myfunction(void)
{
	char *s1, *s2;

	s1 = "You're beat! and yet, you must allow,\n";
	s2 = "I bore my house upon my back!\n";
	printf("%s%s", s1, s2);
}
