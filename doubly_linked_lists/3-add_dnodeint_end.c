#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_dnodeint_end - add node to double linked list
  * @head: head node
  * @n: new node value
  * Return: size_t
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *buf, *temp = *head;

	buf = malloc(sizeof(dlistint_t));
	if (!buf)
		return (NULL);
	buf->n = n;
	buf->next = NULL;
	if (*head)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = buf;
		buf->prev = temp;
	}
	else
	{
		buf->prev = *head;
		*head = buf;
	}
	return (buf);
}
