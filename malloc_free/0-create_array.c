#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of malloc
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
