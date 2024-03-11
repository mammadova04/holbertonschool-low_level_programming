#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
		size++;

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		*(s + i) = *(str + i);
		i++;
	}

	*(s + size) = 0;
	return (s);
}
