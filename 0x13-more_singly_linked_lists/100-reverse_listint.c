#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to struct
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp1;

	while (*head != NULL)
	{
		temp1 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp1;
	}
	*head = temp;
	return (*head);
}
