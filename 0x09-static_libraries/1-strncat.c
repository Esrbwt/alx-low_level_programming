#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (ptr);
}
