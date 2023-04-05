#include "main.h"
/**
 * check  - cheks the number from n to the base
 * @n: input
 * @b: base number to check
 * Return: on success
 */
int check(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (check(n + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: on success
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
