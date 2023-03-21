#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10 times
 *
 * Return : 0 on success
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}
