#include "main.h"
/**
 * _strlen - grts strlen
 * @s: string
 * Return: string length
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - appends text
 * @filename: file name
 * @text_content: text
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (len)
		byte = write(fd, text_content, len);

	close(fd);
	return (byte == len ? 1 : -1);
}
