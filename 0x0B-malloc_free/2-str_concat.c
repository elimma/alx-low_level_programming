#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: On success
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	char *n_str;

	if (s1 == 0 && s2 == 0)
		return (NULL);
	len = strlen(s1) + strlen(s2) + 1;
	n_str = (char *)malloc(len * sizeof(char));
	if (n_str == NULL)
	{
		return (NULL);
	}
	strcpy(n_str, s1);
	strcat(n_str, s2);
	return (n_str);
}
