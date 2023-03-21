#include <unistd.h>
/**
 * main - Entry point
 * 
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
