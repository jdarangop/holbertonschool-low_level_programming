#include <stdio.h>

/**
  * main - Print name of arguments passed..
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
