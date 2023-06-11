#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program prints the number of arguments passed into it.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter: argv */
	printf("%d\n", argc - 1);
	return (0);
}
