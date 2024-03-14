#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name = 0, len_owner = 0;
	dog_t *dog;

	while (*(name + len_name))
		len_name++;
	while (*(owner + len_owner))
		len_owner++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (len_name + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		(*dog).name[i] = name[i];
	(*dog).name[len_name] = '\0';  /* Null-terminate the string */

	(*dog).age = age;

	(*dog).owner = malloc(sizeof(char) * (len_owner + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
		(*dog).owner[i] = owner[i];
	(*dog).owner[len_owner] = '\0';  /* Null-terminate the string */

	return (dog);
}
