#include <stdio.h>
/**
 * main - entry pint
 * @argc: count
 * @argv: pointer to the string
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
