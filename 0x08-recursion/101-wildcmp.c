#include "main.h"
/**
 * end - a
 * @s1: ascii
 * @s2: ascii
 * Return: 1 or 0
*/
int wildcmp(char *s1, char *s2);
int inception(char *s1, char *s2);
int end(char *s2)
{
	if (*s2 == '*')
		return (end(s2 + 1));
	else
	return (*s2);
}
/**
 * inception - a
 * @s1: ascii
 * @s2: ascii
 * Return: value
*/
int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
	return (r);
}
/**
 * wildcmp - a
 * @s1: ascii
 * @s2: ascii
 * Return: value
*/
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !end(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !*s2)
		return (0);
	if (*s2 == '*')
	{
		*s2 = end(s2);

		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += inception(s1, s2);
		return (!!r);
	}
	return (0);
}
