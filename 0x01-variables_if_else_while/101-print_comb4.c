#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int z;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (z = 48; z < 58; z++)
{
if (i != j && j != z && i != z)
{
if (i < j && j < z)
{
putchar(i);
putchar(j);
putchar(z);
if (!(i == 55 && j == 56 && z == 57))
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar('\n');
return (0);
}
