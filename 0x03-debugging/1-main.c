#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		/* i is never incremented, causing an infinite loop */
		/* commented out to avoid infinite loop */
		/* i++; */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
