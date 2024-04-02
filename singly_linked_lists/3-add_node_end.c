#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - adding new node to the list
  * @head: start of list
  * @str: new data
  * Return: new list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *tmp;
	int len = 0;

	while (str[len] != '\0')
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	tmp = *head;
	if (*head)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
