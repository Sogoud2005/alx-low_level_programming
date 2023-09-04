#include "main.h"

/**
 * read_textfile - reads a file
 * @filename: file to read
 * @letters: number of letters to read
 * Return: letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t l;
	int fd;
	char buf[1024 * 8];

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	l = read(fd, &buf[0], letters);
	l = write(STDOUT_FILENO, &buf[0], l);

	close(fd);
	return (l);
}
