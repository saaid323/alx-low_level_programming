#include "main.h"

/*
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	/* prints the alphabet, in lowercase, followed by a new line. */
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
}
