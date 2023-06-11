#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: Number of bytes in the initial segment of 's' which consist only
 *         of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;

	while (*s)
	{
		found = 0;
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;

		s++;
	}

	return (count);
}
