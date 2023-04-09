#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argv: pointer
 * @argc: counter
 * Return: on success
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int multip;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	multip = a * b;
	printf("%d\n", multip);
	return (0);
}
