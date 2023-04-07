#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command-line arguments
 * @argv: array of pointers to command-line arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

