#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of char
 * @c: char
 * @size: size
 * Return: Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
