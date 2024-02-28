#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
