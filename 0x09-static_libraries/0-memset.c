#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte c
 * @s: Pointer to the memory area
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *p = (unsigned char *)s;

	for (i = 0; i < n; i++)
	{
		p[i] = (unsigned char)b;
	}

	return (s);
}
