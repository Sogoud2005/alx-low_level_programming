#include "main.h"
/**
 * *_strstr - a
 * @haystack: ascii
 * @needle: ascii
 * Return: nothing
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *i = needle;
		while (*i == *p && *i != '\0')
		{
			*i++;
			*p++;
		}
		if (i == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
