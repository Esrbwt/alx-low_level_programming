#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_length = 0, current_length = 0;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			current_length++;
		total_length += current_length + 1;
		current_length = 0;
	}

	concatenated_str = malloc(sizeof(char) * total_length + 1);

	if (concatenated_str == NULL)
		return (NULL);

	current_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated_str[current_length++] = av[i][j];
	}
	concatenated_str[current_length] = '\0';

	return (concatenated_str);
}
