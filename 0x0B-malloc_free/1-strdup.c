#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *  _strdup - returns a pointer to a new string
 *  @str: string
 *  Return: Null
 */
char *_strdup(char *str)
{
	int len;
	char *n_str;

	len = strlen(str) + 1;
	n_str = (char *)malloc(len * sizeof(char));
	if (n_str == NULL)
	{
		return (NULL);
	}
	strcpy(n_str, str);
	return (n_str);
}
