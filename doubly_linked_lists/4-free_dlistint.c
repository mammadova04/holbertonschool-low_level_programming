#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * free_dlistint - add node to double linked list
  * @head: head node
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
