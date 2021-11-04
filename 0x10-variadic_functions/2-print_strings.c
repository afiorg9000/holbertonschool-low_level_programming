#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: the string to be printed between the strings.
 * @n:the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int idx;
	char *string;
	va_list list;

	va_start(list, n);
	for (idx = 0; idx < n; idx++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
			else
			{
				printf("%s", string);
			}
		if (separator != NULL && idx < n - 1)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
