#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: double pointer to struct
 * @n: number to be added to the list
 * Return: returns the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	while (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = temp;
	return (temp);
}
