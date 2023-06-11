#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to search for
 *
 * Return: Pointer to the byte in 's'
 * that matches one of the bytes in 'accept',
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int found = 0;

	while (*s)
	{
		found = 0;
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found)
			return (s);

		s++;
	}

	return (NULL);
}

