#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0 on success
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1 ; j <= 9; j++)
		{
			a = (i * j);
			if ((a / 10) > 0)
			{
				_putchar((a / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((a % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

