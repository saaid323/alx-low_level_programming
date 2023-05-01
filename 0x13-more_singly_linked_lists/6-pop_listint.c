#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: A pointer to the pointer to the first node of the list
 * Return: if the linked list is empty return 0 or  head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *old = NULL;
	int data;

	if (*head == NULL || head == NULL)
		return (0);
	old = *head;
	*head = old->next;
	data = old->n;
	free(old);
	old = NULL;
	return (data);
}
