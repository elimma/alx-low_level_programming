#include<stdlib.h>
#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i,j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if ( i != j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
