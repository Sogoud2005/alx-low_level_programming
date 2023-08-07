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
 * create_file - create a file
 * @filename: filename
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		b = write(fd, text_content, len);

	close(fd);
	return (b == len ? 1 : -1);
}
