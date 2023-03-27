#include "main.h"
/*
 * swap_int - swaps the values of two integers
 *
 * @a: integer to swap
 *
 * @b: another integer to swap
 *
 * Return: 0 on Success
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
