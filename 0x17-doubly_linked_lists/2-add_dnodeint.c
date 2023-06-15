#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to struct
 * @n: data
 * Return: he address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *temp = malloc(sizeof(struct dlistint_s));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (*head);
}
