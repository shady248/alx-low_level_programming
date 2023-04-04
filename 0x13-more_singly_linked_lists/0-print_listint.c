#include "lists.h"

/**
  * print_linkedlist - prints all the elements of a list
  * @h: the head of the list
  *
  *Return: nodes numbers.
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes_number = 0;

	while (h != null)
		{
			printf("%d\n" , h->n);
			h = h->next;
			nodes_number++;
		}
	return (nodes_number);
}
