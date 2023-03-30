#include "main.h"
#include <stdlib.h>
/**
 * print_number - print numbers
 * @n: input
 * Return: void
 */
void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		_putchar('-');
		 n *= -1;
	}
	b = n;
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar(b % 10 + '0');
}
