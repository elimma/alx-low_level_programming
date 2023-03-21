#include"main.h"
/**
 * print_alphabet - Making the alphabet
 *
 * Return: 0 on succuess
 */
void print_alphabet(void)
{
	char alph = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
