#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to struct
 * @index: s the index of the node, starting from 0
 * Return: node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count;
    count = 0;
    while(head)
    {
        if (count == index)
        {
            return head;
        }
        count ++;
        head = head->next;
    }
    return NULL;
}
