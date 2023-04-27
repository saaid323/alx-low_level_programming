#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the head of the list
 * @str: String to be added to the new node
 * Return: Address of the new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int len = 0;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}

