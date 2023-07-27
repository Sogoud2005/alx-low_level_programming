#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * come_first - prints text first
 * Return: none
*/
void come_first(void) __attribute__ ((constructor));

void come_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
