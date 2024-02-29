#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *p = s, *i;

	while (*p != '\0')
		p++;
	for (i = p; i != s; i--)
	{
		_putchar(*i);
	}
}
