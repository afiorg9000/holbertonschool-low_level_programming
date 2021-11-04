#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers.
 *@separator: the string to be printed between numbers.
 *@n: the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count, printednumber = 0;
	va_list numbers;
	va_start(numbers, n);
	for(count = 0; count < n; count++)
	{
		_putchar("%i", va_arg(list, unsigned int));
		if (seperator != NULL && count != n - 1)
		{
			_putchar("%s", separator);
		}
	}
	va_end (numbers);
	_putchar('\n');
}
