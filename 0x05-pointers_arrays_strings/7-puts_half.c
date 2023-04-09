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

	for (j = len / 2; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
