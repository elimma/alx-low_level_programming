#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with a cons bytes
 * @s: memory area
 * @b: char to cpy
 * @n: number of times
 * Return: on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: input
 * @size: size
 * Return: on sucess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
