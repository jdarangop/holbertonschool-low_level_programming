#include "holberton.h"

void times_table(void)
{
	int i;
	int j;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			_putchar(a +'0');
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
