#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: parameter.
 *Return: 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, number, total = 0;
	va_list Numberlist;

	if (n == 0)
		return (0);

	va_start(Numberlist, n);
	for (count = 0; count < n; count++)
	{
		number = va_arg(Numberlist, int);
		total += number;
	}
	va_end(Numberlist);

	return (total);
}
