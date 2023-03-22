#include "main.h"
/**
 * print_times_table - prints the n timestable
 *
 * @n: input
 *
 * Return: 0 on success
 */
void print_times_table(int n)
{
	int i, j, k;


	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 100 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 100) % 10) + '0');
					_putchar((k % 100) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 100) % 10) + '0');
					_putchar((k % 100) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
