#include "main.h"
/**
 * *_strstr - a
 * @haystack: ascii
 * @needle: ascii
 * Return: nothing
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;
i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
		if (needle[j] == haystack[i])
		{
			p = &haystack[i];
			return (p);
		}
		j++;
		}
		i++
	}
	return ('\0');
}
