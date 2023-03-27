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
	int i;
	char password[10+1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const size_t charset_size = sizeof(charset) - 1;
	srand(time(NULL));

	for (i = 0; i < 11 ; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[10] = '\0';
	printf("%s\n", password);
       	return 0;
}
