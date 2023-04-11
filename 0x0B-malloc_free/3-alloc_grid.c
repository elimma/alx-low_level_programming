#include "main.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimmension
 * @width: width
 * @height: height
 * Return: On success
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **gr;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	gr = (int **)malloc(height * sizeof(int *));
	if (gr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gr[i] = (int *)calloc(width, sizeof(int));
		if (gr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gr[j]);
			}
			free(gr);
			return (NULL);
		}
	}
	return (gr);
}
