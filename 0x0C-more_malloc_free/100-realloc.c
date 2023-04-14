#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: on cussess
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *q;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
	}
	else if (new_size <= old_size)
	{
		new_ptr = ptr;
	}
	else
	{
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		p = (char *) ptr;
		q = (char *) new_ptr;
		for (i = 0; i < old_size; i++)
		{
			q[i] = p[i];
	}
	free(ptr);
	}
	}
	return (new_ptr);
}
