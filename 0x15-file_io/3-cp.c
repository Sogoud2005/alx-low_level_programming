#include "main.h"
#define BUF_SIZE 1024

/**
 * main - main function
 * @ac: args count
 * @av: args value
 * Return: int
*/
int main(int ac, char **av)
{
	int to = 0, from = 0;
	ssize_t b;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((b = read(from, buf, BUF_SIZE)) > 0)
		if (write(to, buf, b) != b)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	from = close(from);
	to = close(to);
	if (from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	if (to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (EXIT_SUCCESS);
}
