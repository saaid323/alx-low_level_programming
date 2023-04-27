#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @c: poiner to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(*head));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(strdup(str));
	temp->next = *head;
	*head = temp;
	return (temp);
}
