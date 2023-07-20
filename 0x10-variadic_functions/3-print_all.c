#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * f_char - a
 * @s: a
 * @ap: a
 * Return: none
*/
void f_char(char *s, va_list ap)
{
	printf("%s%c", s, va_arg(ap, int));
}
/**
 * f_int - a
 * @s: a
 * @ap: a
 * Return: none
*/
void f_int(char *s, va_list ap)
{
	printf("%s%d", s, va_arg(ap, int));
}
/**
 * f_float - a
 * @s: a
 * @ap: a
 * Return: a
*/
void f_float(char *s, va_list ap)
{
	printf("%s%f", s, va_arg(ap, double));
}
/**
 * f_sting - a
 * @s: a
 * @ap: a
 * Return: a
*/
void f_string(char *s, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", s, str);
}
/**
 * print_all - a
 * @format: a
 * Return: none
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list ap;
	char *s = "";

	token_t token[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (token[j].token)
		{
			if (format[i] == token[j].token[0])
			{
				token[j].f(s, ap);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
