#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to str
 */

void puts_half(char *str)
{
	int j;

	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = len / 2 + 1; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');

}
