#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at
  * index of a listint_t linked list.
  * @head: the list head
  * @index: the index of the node
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
			previous =  previous->next;
	}

	if (previous == NULL || (previous->next  == NULL && index != 0))
		return (-1);

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}
	return (1);
}
