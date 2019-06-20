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
int w;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (z = 48; z < 58; z++)
{
for (w = 48; w < 58; w++)
{
if (i + j < z + w)
{
putchar(i);
putchar(j);
putchar(32);
putchar(z);
putchar(w);
if (!(i == 57 && j == 56 && z == 57 && w == 57))
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
