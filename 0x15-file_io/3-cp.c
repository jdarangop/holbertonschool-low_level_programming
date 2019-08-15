#include "holberton.h"

int main(int argc, char *argv[])
{
	int out_openff, out_openft, out_readff;/* out_closeff, out_closeft;*/
	char buffer[1024];

	if (argc != 3)
	{write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	if (argv[1] == NULL)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	out_openff = open(argv[1], O_RDONLY);
	if (out_openff == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	out_openft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (out_openft == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	out_readff = read(out_openff, buffer, 1024);
	if (out_readff == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	write(out_openft, buffer, out_readff);
	close(out_openft);
	/*out_closeft = close(out_openft);
	*if (out_closeft == -1)
	*{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out_openft);
	*	exit(100);
	*}
	*/
	while (out_readff == 1024)
	{
		out_openft = open(argv[2], O_RDWR | O_CREAT | O_APPEND, 0664);
		if (out_openft == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		write(out_openft, buffer, out_readff);
	}
	/*out_closeft = close(out_openft);
	if (out_closeft == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out_openft);
		exit(100);
	}
	out_closeff = close(out_openff);
	*if (out_closeff == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out_openff);
		exit(100);
	}*/
	close(out_openft);
	close(out_openff);
	return (0);
}




