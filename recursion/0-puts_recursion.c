#include "main.h"
/**
 * _puts_recursion - puts
 * @s: string
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		 _puts_recursion(s);
	}
	else
		_putchar('\n');
}
