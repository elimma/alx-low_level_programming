#include"main.h"
/**
 * _isdigit - check if outputs are digits
 *
 * @c: is the character that will be checked
 *
 * Return: 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
