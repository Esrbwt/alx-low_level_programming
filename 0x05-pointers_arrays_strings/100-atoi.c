#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string to be converted.
 *
 * Return: converted integer.
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}

	return (res * sign);
}
