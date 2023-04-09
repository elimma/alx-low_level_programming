#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counter
 * @argv: pointer
 * Return: on success
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[2]);
	int count = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			count++;
			cents -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
