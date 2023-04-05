#include "main.h"
/**
 * factorial - returns factiral
 * @n: inputs
 * Return: on success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
