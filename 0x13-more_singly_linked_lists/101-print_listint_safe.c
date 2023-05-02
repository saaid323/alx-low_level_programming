#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
 *
 * @head: A pointer to the head of the listint_t linked list to print.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *current, *temp;

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		i++;
		temp = current;
		current = current->next;
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (i);
}
