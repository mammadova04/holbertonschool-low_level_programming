#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - func for find lenght of list
  * @h: list
  * Return: number of elements in the list
  */
size_t list_len(const list_t *h)
{
	size_t i;

	if (!h)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
