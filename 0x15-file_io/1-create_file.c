#include "main.h"

/**
 * _strlen - gets string length
 * @str: string
 * Return: length
*/
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str++)
	{
		i++;
	}
	return (i);
}

/**
 * create_file - creates a file if it does not exist
 * @filename: file to create
 * @text_content: text to include
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t l;
	int fd, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	l = write(fd, text_content, len);

	if (l == -1)
		return (-1);

	close(fd);

	return (1);
}
