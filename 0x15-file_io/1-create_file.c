#include "main.h"

/**
 * _strlen - gets string length
 * @str: string
 * Return: length
*/
ssize_t _strlen(char *str)
{
	ssize_t i = 0;

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
	ssize_t l, len = _strlen(text_content);
	int fd;

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (len)
	{
		l = write(fd, text_content, len);
	}
	close(fd);

	return (l = len ? 1 : -1);
}
