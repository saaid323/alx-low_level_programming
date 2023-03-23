#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (i <= j)
				{
					_putchar('#');
				}
				else
				{
					_putchar('.');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
