#include <stdlib.h>
#include <stdio.h>
/*
 * main - prints all the alphabets in lowercase 
 *
 * Return 0 on success
 */
int main()
{
	char ch;
	for (ch ='a';ch <= 'z'; ++ch)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
