#include "main.h"

/**
 * _isdigit - prints 0 to 9
 * @c: character to be checked
 * Return: i if c is a number otherwise o
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
