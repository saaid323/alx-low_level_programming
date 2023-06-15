#include "lists.h"

/**
 * sum_dlistint - return sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to struct
 * Return: return 0, if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
