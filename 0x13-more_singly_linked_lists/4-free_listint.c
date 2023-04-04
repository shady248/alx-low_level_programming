#include "lists.h"

/**
  * free_listint - frees a linked list
  * @head: the head of the list
  *
  * Return: none
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
