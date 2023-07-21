#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - s
 * @separator: a
 * @n: a
 * Return: a
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(str, n);
	while (i--)
	{
		printf("%s%s", (s = va_arg(str, char *)) ? s : "(nil)"
				, i ? (separator ? separator : "") : "\n");
	}
	va_end(str);
}
