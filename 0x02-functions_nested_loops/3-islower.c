#include"main.h"
/**
  * _islower - Checks for lowercase character
  *
  * alph is the character that will be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
