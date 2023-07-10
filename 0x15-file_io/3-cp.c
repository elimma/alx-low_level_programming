#include "main.h"
#include <stdlib.h>
/**
 * print_error_and_exit - print an error
 * @exit_code: exit code to be used when terminating the program
 * @error_message: The error message to be printed
 */
void print_error_and_exit(int exit_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}
/**
* main - copy info from file_from to file_to.
* @ac: number of arguments
* @av: array of arguments
* Return: Always 0.
*/
