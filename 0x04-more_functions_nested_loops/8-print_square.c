#include "main.h"
/**
 * print_square - prints square
 *
 * @size: input
 *
 * Return: 0 on success
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; i < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
