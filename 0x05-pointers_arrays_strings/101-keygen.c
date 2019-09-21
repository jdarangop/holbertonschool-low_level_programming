#include <stdio.h>
#include <stdlib.h>

/**
 * main - Contains the leygen for crackme 1.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[1024], letra;
	int suma = 0, i = 0, num;

	while (suma < 2673)
	{
		srand(i);
		num = rand() % 13;
		if (num > 10)
			letra = 99;
		else if (num > 5)
			letra = 66;
		else
			letra = 33;
		suma += letra;
		buffer[i] = letra;
		i++;
	}
	buffer[i] = 2772 - suma;
	buffer[++i] = '\0';
	printf("%s", buffer);
	return (0);
}
