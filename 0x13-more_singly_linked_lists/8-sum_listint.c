#include "lists.h"

/**
  * sum_listint - rturns the sum of all the data (n)
  * of a listint_t linked list.
  * @head: the linked list head
  *
  * Return:  the sum of all the data (n), 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
