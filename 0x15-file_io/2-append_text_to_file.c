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
 * append_text_to_file - append_text_to_file
 * @filename: file to append text to
 * @text_content: text to append
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes, len = _strlen(text_content);

	if (!filename && !text_content)
	{
		return (-1);
	}
	else if (!text_content && filename)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);

	close(fd);

	return (bytes = len ? 1 : -1);
}
