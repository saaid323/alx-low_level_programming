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
	unsigned int i;
	listint_t *temp1 = malloc(sizeof(listint_t));

	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;

	if (idx == 0)
	{
		temp1->next = *head;
		*head = temp1;
		return (temp1);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(temp1);
		return (NULL);
	}
	temp1->next = temp->next;
	temp->next = temp1;
	return (temp1);
}
