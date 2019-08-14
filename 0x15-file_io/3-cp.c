#include "holberton.h"

int main(int argc, char *argv[])
{
	int out_openff, out_openft, out_readff;
	char buffer[1024];

	if (argc != 3)
	{
		write(STDOUT_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	if ((out_openff = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	if ((out_openft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664)) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	if ((out_readff = read(out_openff, buffer, 1024)) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	write(out_openft, buffer, out_readff);
	/*close(out_openft);*/
	while (out_readff == 1024)
	{
		/*if ((out_openft = open(argv[2], O_RDWR | O_CREAT | O_APPEND, 0664)) == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[2]);
			exit(98);
		}*/
		write(out_openft, buffer, out_readff);
	}
	close(out_openft);
	close(out_openff);
	return (0);
}




