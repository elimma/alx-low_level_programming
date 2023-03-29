#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words
 * @str: input
 * Return: str
 */
char *cap_string(char *str)
{
	int cap_words = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (cap_words && isalpha(*p))
		{
			*p = toupper(*p);
			cap_words = 0;
		}
		else if (isspace(*p) || ispunct(*p))
		{
			cap_words = 1;
		}
		p++;
	}
	return (str);
}
