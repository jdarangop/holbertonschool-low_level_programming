#include <stdio.h>

/**
  * main - Print number of arguments passed.
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: Its name.
  */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
