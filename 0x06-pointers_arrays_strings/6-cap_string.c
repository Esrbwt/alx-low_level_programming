#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	/* Capitalize first letter of first word */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = toupper(s[0]);

	/* Capitalize first letter of words after given separators */
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' &&
				(s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
				 s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
				 s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
				 s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
				 s[i - 1] == '}'))
		{
			s[i] = toupper(s[i]);
		}
	}

	return (s);
}
