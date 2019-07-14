#include <stdio.h>

/**
  * main - Print its name.
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: Always 0.
  */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
