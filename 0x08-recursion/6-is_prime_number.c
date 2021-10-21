#include "main.h"

/**
 * prime_check - function that check if a number is a prime number
 *
 * @i: an iterator
 * @num: an integer
 *
 * Return: 1 if num is a prime number, 0 otherwise
 */
int prime_check(int i, int num)
{
	if (num % i == 0)
	{
		return (0);
	}
	else if (i > num / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(i + 1, num));
	}
}

/**
 * is_prime_number - function that returns 1 if a number is prime number
 *
 * @n: the number
 *
 * Return: 1 if the number is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(2, n));
}
