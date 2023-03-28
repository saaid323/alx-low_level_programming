#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;
	int neg_check = 1;
	int check = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			neg_check *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			check = 1;
			num = (num * 10) + (s[c] - '0');
			c++;
		}

		if (check == 1)
		{
			break;
		}

		c++;
	}

	num *= neg_check;
	return (num);
}
