#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: poiter to struct
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	char nil[] = "[0] (nil)\n";
	int _nil = strlen(nil);
	int i;

	while (h)
	{
		count++;
		if (h->str == NULL)
		{
			for (i = 0; i < _nil; i++)
			{
				_putchar(nil[i]);
			}
		}
		else
		{
			int len = strlen(h->str);

			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < len; i++)
			{
				_putchar(h->str[i]);
			}
			_putchar('\n');
		}
		h = h->next;
	}
	return (count);
}
