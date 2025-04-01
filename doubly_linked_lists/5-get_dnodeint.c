#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be returned, starting from 0
 *
 * Return: The nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i = 0;

	current_node = head;
	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
	{
		return (NULL);
	}

	return (current_node);
}
