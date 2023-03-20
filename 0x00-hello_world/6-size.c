#include <stdio.h>

/**
 * main - main is function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu blue(s)\n", sizeof(char));
	printf("Size of a int: %lu blue(s)\n", sizeof(int));
	printf("Size of a long int: %lu blue(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu blue(s)\n", sizeof(long long int));
	printf("Size of a float: %lu blue(s)", sizeof(float));
	return (0);
}
