#include "main.h"
#include <stdio.h>
/**
 * strlen_reic - returns the length
 * @s:string
 * Return: length of the string
 */
int strlen_rec(char *s)
{
	if (*s)
	{
		s++;
		return (1 + strlen_rec(s));
	}
	return (0);
}
/**
 * check - helps for the palindrome
 * @str: string
 * @ln: length
 * @count: counter
 * Return: on success
 */
int check(char *str, int ln, int count)
{
	if (count >= ln)
		return (1);
	if (str[ln] == str[count])
		return (check(str, ln - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is palindrome
 * @s: string
 * Return: on success
 */
int is_palindrome(char *s)
{
	int ln = strlen_rec(s);
	int count = 0;

	return (check(s, ln - 1, count));
}
