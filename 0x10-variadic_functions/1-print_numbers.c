#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - a
 * @separator: a
 * @n: a
 * Return: none
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list an;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(an, n);
	while (i--)
		printf("%d%s", va_arg(an, int), i ? (separator ? separator : "") : "\n");
	va_end(an);
}
