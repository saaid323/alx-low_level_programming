#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *old = NULL;
	int data;

	if (*head == NULL || head == NULL)
		return 0;
	else
	{
		old = *head;
		*head = old->next;
		data = old->n;
		free(old);
		old = NULL;
	}
	return data;
}
