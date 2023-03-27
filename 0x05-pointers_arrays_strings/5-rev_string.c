#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, j, a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (i = 0, j = a - 1; i < j; i++, j--)
	{
		int temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
