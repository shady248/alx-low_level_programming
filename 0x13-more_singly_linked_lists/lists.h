#ifndef _LISTS_
#define _LISTS_
#include <stdio.h>
#include <stdlib.h>

/**
  * struct listint_s - singly linked list
  * @n: Integer
  * @next: points to the  next node.
  * Description: singly linked list strcture for nodes.
  */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
  * struct listp_s - singly linked list
  * p: Pointers
  * @next: Points to the next node
  * Description: singly linked list for pointers
  */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);

#endif
