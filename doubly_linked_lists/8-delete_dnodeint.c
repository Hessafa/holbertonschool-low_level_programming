#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 *                            in a dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	/* Deleting the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at the given index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL) /* Index out of range */
		return (-1);

	/* Unlink the node from the list */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
