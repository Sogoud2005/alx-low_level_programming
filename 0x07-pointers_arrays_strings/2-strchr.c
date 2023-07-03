#include "main.h"
/**
 * *_strchr - a
 * @s: ascii
 * @c: ascii
 * Return: nothing
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('NULL');
}
