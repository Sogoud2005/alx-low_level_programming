#include "main.h"
/**
 * _strspn - a
 * @s: ascii
 * @accept: ascii
 * Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;
	int a = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		c = 0;
	for (j = 0; accept[j] >= '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			a++;
			c = 1;
		}
	}
	if (check == 0)
	return (a);
	}
}
