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

	if (!b)
		return 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != 'i')
			return 0;
		else if (b[i] == '1')
		{
			sum = (sum << 1) | 1;
		}
		else if (b[i] == '0')
		{
			sum = sum << 1;
		}
	}
	return (sum);
}
