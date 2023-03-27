#include "main.h"
/*
 * swap_int - swaps the value oftwo integers
 *
 * @a,@b: inputs
 *
 * Return: 0 on Success
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
