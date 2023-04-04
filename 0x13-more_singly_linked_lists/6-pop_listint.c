#include "lists.h"

/**
  * pop_listint -  deletes the head node of a listint_t linked list
  * @head: the list's head
  *
  * Return: the head node’s data, 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (head_node);
}
