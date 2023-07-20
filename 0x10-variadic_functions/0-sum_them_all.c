#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a
 * @n: a
 * Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(a, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
