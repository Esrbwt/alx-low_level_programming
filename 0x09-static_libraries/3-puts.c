#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: The input string
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
