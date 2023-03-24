#include "main.h"
#include <stdio.h>
/**
 * print_number - print integer
 *
 * @n: input
 *
 * Return: 0 on success
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n *= -1;
		m = n;
		_putchar(45);
	}
	m /= 10;
	if (m != 10)
		print_number(m);
	_putchar((unsigned int) n % 10 + '0');
}
