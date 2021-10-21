#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *_get_sqrt - get the square root of a number
 *
 * @n: a number
 * @sqr: a value
 *
 * Return: the natural square root of a number
 */
int _get_sqrt(int n, int sqr);

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (_get_sqrt(n, 1));
	}
	else
	{
		return (-1);
	}
}
/**
 *_get_sqrt - get the square root of a number
 *
 * @n : a number
 * @sqr : a value
 *
 * Return: the natural square root of a number
 */
int _get_sqrt(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}
	else if (sqr >= n)
	{
		return (-1);
	}
	return (_get_sqrt(n, sqr + 1));
}
