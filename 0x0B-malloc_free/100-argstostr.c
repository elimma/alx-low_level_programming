#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of the program
 * @ac: counter
 * @av: pointer
 * Return: on success
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i;
	unsigned int j;
	char *str;
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[position++] = av[i][j];
		}
		str[position++] = '\n';
	}
	str[position] = '\0';
	return (str);
}
