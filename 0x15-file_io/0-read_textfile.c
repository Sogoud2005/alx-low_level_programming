#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * read_textfile - reads text file and prints a number of characters
 * @filename: pointer to file
 * @letters: number of letters
 * Return: number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	int fd;
	char arr[READ_BUF_SIZE * 8];

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	i = read(fd, &arr[0], letters);
	i = write(STDOUT_FILENO, &arr[0], i);

	close(fd);
	return (i);
}

