#include <stdio.h>
#include <unistd.h>
/**
 * main - Print
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int tm;

	tm = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", tm);
	return (1);
}