#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_dlistint - descp
  * @h: salam
  * Return: size_t
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
