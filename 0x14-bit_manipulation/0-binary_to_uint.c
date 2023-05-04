#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int len = strlen(b);
	int i;

	for (i = 0; i < len; i++)
	{
		if (b[i] >= 48 && b[i] <= 49)
		{
			sum += (b[i] - '0') * pow(2, len - i - 1);
		}
		else
			return (0);
	}
	return (sum);
}
