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

	for  (count = 0; count < n; count++)
	{
		printednumber = va_arg(numbers, unsigned int);
		printf("%d", printednumber);

		if ((count + 1) != n && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
