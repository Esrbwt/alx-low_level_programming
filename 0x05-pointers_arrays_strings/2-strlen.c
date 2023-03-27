#include "main.h"
#include <stdio.h>

/**
 * _strlen - computes the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
