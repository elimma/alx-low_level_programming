#include "main.h"
/**
 *  print_last_digit - prints the last digit of a number
 *  @number: output
 *  Return: the value of the last digit
 */
int print_last_digit(int number)
{
	int printld = number % 10;

	if (printld < 0)
	{
		printld = (-1 * printld);
	}
	_putchar(printld + '0');
	return (printld);
}
