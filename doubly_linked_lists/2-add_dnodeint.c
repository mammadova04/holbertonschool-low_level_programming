#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_dnodeint - add node to double linked list
  * @head: head node
  * @n: new node value
  * Return: size_t
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *buf;

	buf = malloc(sizeof(dlistint_t));
	if (!buf)
		return (NULL);
	buf->n = n;
	buf->next = *head;
	buf->prev = NULL;
	if (*head)
		(*head)->prev = buf;
	*head = buf;
	return (buf);
}
