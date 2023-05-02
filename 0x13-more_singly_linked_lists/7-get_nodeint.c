#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer to struct
 * @index: the index of the node
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	index -= 1;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
                return (NULL);
	temp = temp->next;
	return (temp);
}
