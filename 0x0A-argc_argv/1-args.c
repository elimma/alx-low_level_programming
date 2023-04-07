#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count
 * @argv: pointer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
