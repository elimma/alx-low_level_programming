#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: count
 * @argv: pointer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	int num;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
