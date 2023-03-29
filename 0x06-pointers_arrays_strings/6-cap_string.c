#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizes all words
 * @str: input
 * Return: str
 */
char *cap_string(char *str)
{
	int cap_nxt = 1;
	int i;

	for (i = 0; str[i] != '\0';i++)
	{
		if (cap_nxt && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			cap_nxt = 0;
		}
		else if (strchr(" \t\n,;.?\"(){}", str[i]) != NULL)
		{
			cap_nxt = 1;
		}
	}
	return (str);
}
