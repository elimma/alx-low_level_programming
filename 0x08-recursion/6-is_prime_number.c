#include "main.h"
/**
 * check - checks the evaluation from 1 to n
 * @a:input
 * @b:number to check with
 * Return: on success
 */
int check(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (check(a, b + 1));
}
/**
 * is_prime_number - checks if the number is prime
 * @n: input
 * Return: on success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
