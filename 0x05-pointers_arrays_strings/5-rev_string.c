#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	/* Get the length of the string */
	for (j = 0; s[j] != '\0'; j++)
		;

	/* Swap characters from both ends until the middle */
	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = tmp;
	}
}
