#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - creates new dog
 * @name: dog.name
 * @age: dog.age
 * @owner: dog.owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name = 0, len_owner = 0;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (*(name + len_name))
		len_name++;
	while (*(owner + len_owner))
		len_owner++;
	
	(*dog).name = malloc(sizeof(char) * (len_name + 1));
	if ((*dog).name == NULL)
	{
		free((*dog).name), free(dog);
		return (NULL);
	}

	(*dog).age = age;

	(*dog).owner = malloc(sizeof(char) * (len_owner + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).owner), free((*dog).name), free(dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		*((*dog).name + i) = *(name + i);
	for (i = 0; i < len_owner; i++)
                *((*dog).owner + i) = *(owner + i);
	return (dog);
}
