#include "main.h"
/**
 * last - a
 * @s: ascii
 * Return: 1 or 0
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last(char *s)
{
	int n;

	if (*s > '\0')
		n += last(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - a
 * @s: ascii
 * Return: value
*/
int is_palindrome(char *s)
{
	int end = last(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - a
 * @s: ascii
 * @start: ascii
 * @end: ascii
 * @mod: ascii
 * Return: value
*/
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
