#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: double pointer to struct
 * @idx: is the index of the list where the new node should be added.
 * @n: data
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count;

	if (*h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	count = 0;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
