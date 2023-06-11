#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: This program adds positive numbers and prints the result.
 * If no number is passed, it prints 0.
 * If any argument contains symbols that are not digits,
 * it prints an error message.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
