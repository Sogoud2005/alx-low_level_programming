#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"

/**
 * main - copies content from one file to another
 * @argc: argc
 * @argv: argv
 * Return: 0
*/

int main(int argc, char **argv)
{
	int fd = 0, fd2 = 0;
	ssize_t b;
	char buff[READ_BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	fd2 = open(argv[1], O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}
	while ((b = read(fd2, buff, READ_BUF_SIZE)) > 0)
		if (write(fd, buff, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}
	fd = close(fd);
	fd2 = close(fd2);
	if (fd == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd2), exit(100);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd2), exit(100);
	return (EXIT_SUCCESS);
}
