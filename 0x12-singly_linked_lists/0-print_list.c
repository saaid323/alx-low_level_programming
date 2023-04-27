#include "lists.h"

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
				putchar(nil[i]);
			}
		}
		else
		{
			int len = strlen(h->str);

			putchar('[');
			putchar(h->len + '0');
			putchar(']');
			putchar(' ');
			for (i = 0; i < len; i++)
			{
				putchar(h->str[i]);
			}
			putchar('\n');
		}
		h = h->next;
	}
	return (count);
}
