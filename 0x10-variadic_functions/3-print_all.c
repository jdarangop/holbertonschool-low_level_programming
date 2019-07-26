#include "variadic_functions.h"

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

void print_all(const char * const format, ...)
{

	va_list valist;
	int i = 0;

	va_start(valist, format);

	while (format == NULL)
	{
		return;
	}

	while (format[i])
	{
		char *tmp;
		int flag = 0;

		switch (format[i])
		{
			case 'c':
				
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				tmp = va_arg(valist, char *);
				if (tmp != NULL)
					printf("%s", tmp);
					break;

				printf("(nil)");
				break;
			default:
				flag = 1;
				break;

		}
		if (flag == 0 && i != (_strlen(format) - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

	va_end(valist);
	
}
