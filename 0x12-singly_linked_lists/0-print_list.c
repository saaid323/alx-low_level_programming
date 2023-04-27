#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: poiter to struct
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return (count);
}
