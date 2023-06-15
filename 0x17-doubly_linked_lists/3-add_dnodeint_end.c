#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to struct
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *temp = malloc(sizeof(struct dlistint_s));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		dlistint_t *next = *head;

		while (next->next != NULL)
			next = next->next;
		next->next = temp;
		temp->prev = next;
	}
	return (temp);
}
