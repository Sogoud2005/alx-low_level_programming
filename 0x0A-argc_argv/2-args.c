#include "main.h"
#include <stdio.h>
/**
 * main - a
 * @argc: a
 * @argv: a
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
		++argc;
	}
	return (0);
}
