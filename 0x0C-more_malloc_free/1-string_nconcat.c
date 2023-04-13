#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: on sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int length_s1;
	unsigned int length_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	if (n >= length_s2)
	{
		n = length_s2;
	}
	new_str = malloc(length_s1 + n + 1);
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, s1);
	strncat(new_str, s2, n);
	return (new_str);
}
