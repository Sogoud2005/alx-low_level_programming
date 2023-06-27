#include "main.h"
/**
 * rev_string - a program
 * @s: a character
 * Return: nothing
*/
void rev_string(char *s)
{
	int i, c;
	char tmp;


	for (i = 0; s[i] != '\0'; ++i)
	{
		;
	}
	for (c = 0; c < i / 2; c++)
	{
		tmp = s[c];
		s[c] = s[i - 1 - c];
		s[i - 1 - c] = tmp;
	}
}
