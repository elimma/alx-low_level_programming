#include <stdlib.h>
#include <stdio.h>
/*
 * main - Entry point
 *
 * Return 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
