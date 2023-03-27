#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	char *t = s;

	/* find the length of the string */
	while (*t != '\0')
	{
		len++;
		t++;
	}

	/* print the string in reverse */
	while (len > 0)
	{
		len--;
		putchar(*(s + len));
	}
	putchar('\n');
}
