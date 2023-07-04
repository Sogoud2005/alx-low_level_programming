#include "main.h"
/**
 * *_strstr - a
 * @haystack: ascii
 * @needle: ascii
 * Return: nothing
*/
char *_strstr(char *haystack, char *needle)
{
	char *p, *i;

	for (haystack != '\0'; haystack++)
	{
		*p = haystack;
		*i = needle;
		while (*p == *i && *i != '\0')
		{
			*p++;
			*i++;
		}
		if (i == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
