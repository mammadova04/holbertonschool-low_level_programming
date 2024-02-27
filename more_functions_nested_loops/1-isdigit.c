#include "main.h"
/**
*_isdigit - checks
*@c: character to be verified
*Return: return 0 or 1
*/
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
