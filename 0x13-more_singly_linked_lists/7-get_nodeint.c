#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: the linked list head
  * @index: index of the node, starting at 0;
  *
  * Return: the nth node , return NULL of it does not exist.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
