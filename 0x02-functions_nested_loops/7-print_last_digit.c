#include "main.h"
/**
 * print_last_digit - prints the last digit of the number.
 *
 * @n: the number in question.
 *
 * Return: va;lue of the last digit.
 */
int print_last_digit(int n)
{
	n = n % 10;
if (n < 0)
{
n = -n;
}
	_putchar (n + '0');
	return (n);
}
