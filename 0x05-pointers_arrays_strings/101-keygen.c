#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password that can be used to crack 101-crackme.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char password[65];
	int i;

	srand(time(NULL));

	for (i = 0; i < 64; i++)
	{
		password[i] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[rand() % 62];
	}
	password[64] = '\0';

	printf("%s", password);

	return (0);
}
