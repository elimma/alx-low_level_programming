#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;

	for(a = 0 ; a < 10 ; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
