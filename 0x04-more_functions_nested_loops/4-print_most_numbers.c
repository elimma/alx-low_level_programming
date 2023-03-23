#include"main.h"
/**
 * print_most_numbers - Making the numbers
 *
 * Return: 0 on succuess
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if ((num == '2' || num == '4') == 0)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
