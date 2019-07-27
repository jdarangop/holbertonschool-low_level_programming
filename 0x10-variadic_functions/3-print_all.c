#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, format);
	while (format == NULL)
		return;
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
				if (tmp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", tmp);
				break;
			default:
				flag = 1;
				break;
		}
		if (flag == 0  && i != (strlen(format) - 1))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
