#include "holberton.h"

/**
 * times_table - Print the patron of numbres.
 *
 * Return: void.
 */
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
			if (a > 9)
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
