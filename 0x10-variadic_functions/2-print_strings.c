#include "variadic_functions.h"

/**
  * print_strings - Print the strings passed.
  * @separator: Separator format.
  * @n: Number of parameters.
  * Return: void.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);


	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);

}
