#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int n = sizeof(a) / sizeof(int);

	print_array(a, n);
	reverse_array(a, n);
	print_array(a, n);

	return (0);
}
