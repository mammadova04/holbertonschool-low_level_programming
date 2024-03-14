#include <stddef.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog struct
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name:");
	if ((*d).name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).name);

	printf("Age: ");
	if (!(*d).age)
                printf("(nil)\n");
        else
                printf("%f\n", (*d).age);

	printf("Owner: ");
        if ((*d).owner == NULL)
                printf("(nil)\n");
        else
                printf("%s\n", (*d).owner);
}
