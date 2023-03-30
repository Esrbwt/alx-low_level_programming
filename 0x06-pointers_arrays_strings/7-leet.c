#include "main.h"

/**
 * leet - encodes a string to 1337.
 *
 * @str: string to be encoded.
 *
 * Return: Pointer to encoded string.
 */
char *leet(char *str)
{
	int i;
	char *s = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (*s != '\0')
	{
		i = 0;

		while (letters[i] != '\0')
		{
			if (*s == letters[i])
				*s = numbers[i];

			i++;
		}
		s++;
	}
	return (str);
}
