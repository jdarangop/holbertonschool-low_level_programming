#include <stdio.h>

/**
  * main - Print number of arguments passed.
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: Its name.
  */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (*argv[0]);
}
