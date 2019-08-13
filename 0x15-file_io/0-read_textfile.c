#include "holberton.h"

/**
  * read_textfile - Read a text in a file and print it.
  * @filename: Name of the file.
  * @letters: Number of letters.
  * Return: Always 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fopen(), *f;
	int character;
	unsigned int counter = 0;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	/*content = malloc(letters * sizeof(char));*/

	character = getc(f);
	while ((character != EOF) && (counter != letters))
	{
		putchar(character);
		character = getc(f);
		counter++;
	}
	fclose(f);
	return (counter);
}
