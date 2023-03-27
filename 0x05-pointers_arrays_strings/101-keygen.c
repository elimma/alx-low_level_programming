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
	int counter = 0;
	char randChar;
	int passLength;

	printf("enter the length of your password  \n");
	scanf("%d", &passLength);
	while (counter < passLength)
	{
		srand(time(NULL));
		randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
		printf("%c", randChar);
		counter++;
	}
	return (0);
}
