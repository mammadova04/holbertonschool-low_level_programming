#include "main.h"
/**
 * _helper - helper
 * @x: x
 * @y: y
 * Return: int
 */
int _helper(int x, int y)
{
	if (y % x != 0)
		return (0);
	else if (x * 2 < y)
		return (1);
	else
		return (_helper(x + 1, y));
}
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (_helper(2, n));
}
