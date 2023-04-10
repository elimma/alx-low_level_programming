#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a memory
 * @b: number of bytes
 * @n: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
