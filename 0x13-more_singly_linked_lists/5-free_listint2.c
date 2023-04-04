#include "lists.h"

/**
  * free_listint2 - frees a linked list & sets head to NULL
  * @head: list head
  *
  * Return: none
  */
void free_listint2(listint_t **head)
{
	linkedint_t *tmp;
	linkedint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
