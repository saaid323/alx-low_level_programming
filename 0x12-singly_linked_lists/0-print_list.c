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
		count ++;
		if (h->str != NULL)
		{
			printf("[%i] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		h = h->next;
	}
	return count;
}
