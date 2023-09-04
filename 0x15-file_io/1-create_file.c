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

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (len)
	{
		l = write(fd, text_content, len);
	}
	close(fd);

	return (l == len ? 1 : -1);
}
