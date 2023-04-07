#include<stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counter
 * @argv: pointer
 * Return: on success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
