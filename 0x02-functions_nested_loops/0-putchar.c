#include <main.h>
/**
 * main - Entry point
 * 
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;
	int ln = sizeof(c) -1;

	for (i = 0; i < ln; i++)
	{
		write(1,&c[i],1);
	}
	return (0);
}
