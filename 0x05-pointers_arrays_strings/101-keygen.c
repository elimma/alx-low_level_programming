#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password
 *
 * Return: 0 on success
 */
int main(void)
{
	int p;
	char c;

	srand(time(NULL));
	while (p <= 2645)
	{
		c = rand() % 128;
		p += c;
		putchar(c);
	}
	putchar(2772 - p);
	return (0);
}
