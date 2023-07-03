#include "main.h"
/**
 * *_memcpy - a
 * @dest: ascii
 * @src: ascii
 * @n: ascii
 * Return: nothing
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		src[i] = dest[i];
	}
	return (*dest);
}
