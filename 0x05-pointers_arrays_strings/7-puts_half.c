#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to str
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i - 1) / 2;
	}
	for (j = i; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
