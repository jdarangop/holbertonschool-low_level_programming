#include "holberton.h"

/**
  * read_textfile - Read a text in a file and print it.
  * @filename: Name of the file.
  * @letters: Number of letters.
  * Return: Always 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, tmp;
	char *content;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	content = malloc(letters * sizeof(char));
	tmp = read(fd, content, letters);
	write(1, content, letters);

	return (tmp);
}
