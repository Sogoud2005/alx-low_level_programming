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
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
