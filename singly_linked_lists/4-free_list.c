#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * free_list - free linked list
  * @head: start of list
  *
  */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
