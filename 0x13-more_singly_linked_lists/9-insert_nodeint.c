#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to struct
 * @idx:  is the index of the list where the new node should be added
 * @n: data to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *temp1 = malloc(sizeof(listint_t));
	unsigned int i;

	temp1->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	temp1->next = temp->next;
	temp->next = temp1;
	if (temp == NULL)
		return (NULL);
	return (temp);
}
