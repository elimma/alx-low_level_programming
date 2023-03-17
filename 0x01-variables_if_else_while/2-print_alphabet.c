#include <stdlib.h>
#include <stdio.h>
/*
 * main - prints all the alphabets in lowercase 
 *
 * Return 0 on success
 */
int main(void)
{
	char ch ;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	return (0);
}
