#include "main.h"
/**
 * is_prime_number - a program
 * @n: ascii
 * @o: ascii
 * Return: 1 or 0
*/
int check(int n, int o);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - a
 * @n: ascii
 * @o: ascii
 * Return: value
*/
int check(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check(n, (o + 1)));
}
