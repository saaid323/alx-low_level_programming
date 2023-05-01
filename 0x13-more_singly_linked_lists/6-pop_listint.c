#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *old = NULL;

	if (*head == NULL)
		return 0;
	else
	{
		old = *head;
		*head = (*head)->next;
		free(old);
		old = NULL;
	}
	return (*head)->n;
}
