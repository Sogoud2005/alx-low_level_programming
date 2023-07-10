#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a
 * @argc: a
 * @argv: a
 * Return: value
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, change = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				change += money / cents[i];
				money = money % cents[i];
				if (money % cents [i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
