#include "main.h"
#include <stdlib.h>

/**
* read_textfile - check the code for Holberton School students.
* @filename: file to read and write
* @letters: number of letters to read and write.
* Return: letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nletrs;
	int f;
	char *txt;

	if (!filename)
		return (0);
	txt = malloc(sizeof(char) * letters + 1);
	if (txt == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(txt);
		return (0);
	}
	nletrs = read(f, txt, sizeof(char) * letters);
	if (nletrs == -1)
	{
		free(txt);
		close(f);
		return (0);
	}
	nletrs = write(STDOUT_FILENO, txt, nletrs);
	if (nletrs == -1)
	{
		free(txt);
		close(f);
		return (0);
	}
	free(txt);
	close(f);
	return (nletrs);
}
