#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - adding new node to the list
  * @head: start of list
  * @str: new data
  * Return: new list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	while (str[len] != '\0')
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	if (!temp->str)
	{
		free(temp);
	return (NULL);
	}
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (temp);
}

