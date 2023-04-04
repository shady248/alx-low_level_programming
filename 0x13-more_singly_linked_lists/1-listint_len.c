#include "lists.h"

/**
  * listint_len - prints the number of elements in a linked list
  * @h: the list head
  *
  * Return: returns the number of elements of a list
  */
size_t listint_len(const listint_t *h)
{
	size_t nodes_number = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_number++;
	}
	return (nodes_number);
}
