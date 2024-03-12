#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - first and n elements of 2nd str
 * @s1: first string
 * @s2: second string
 * @n: count of elements from 2nd string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0, l;
	char *concat;

	if (s1 == NULL)
		l1 = 0;
	else
		while (s1[l1])
			l1++;
	if (s2 == NULL)
		l2 = 0;
	else
		while (s2[l2])
			l2++;
	if (n >= l2)
		n = l2;
	l = l1 + n;
	concat = malloc(sizeof(char) * l + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (i < l1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - l1];
	}
	concat[i] = '\0';
	return (concat);
}
