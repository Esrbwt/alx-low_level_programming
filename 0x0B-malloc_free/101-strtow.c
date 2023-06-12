#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int word_count = 0;
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	char **words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int word_index = 0;
	int word_length = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			if (i == 0 || str[i - 1] == ' ')
			{
				word_length = 1;
			}
			else
			{
				word_length++;
			}
		}
		else if (word_length > 0)
		{
			words[word_index] = malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{

				for (int j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			strncpy(words[word_index], &str[i - word_length], word_length);
			words[word_index][word_length] = '\0';
			word_index++;
			word_length = 0;
		}
	}

	words[word_index] = NULL;
	return (words);
}
