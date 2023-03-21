#include <stdio.h>
#include <main.h>
#include <unistd.h>
/**
 * main - Entry point
 * 
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
