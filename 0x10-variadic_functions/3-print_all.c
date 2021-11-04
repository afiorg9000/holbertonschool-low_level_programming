#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: data types
 * Return: nothing:
 */
void print_all(const char * const format, ...)
{
	int count = 0;
	va_list print;
	char *string, *comma = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(print, format);
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", comma, va_arg(print, int));
				comma = ", ";
				break;
			case 'i':
				printf("%s%d", comma, va_arg(print, int));
				comma = ", ";
				break;
			case 'f':
				printf("%s%f", comma, va_arg(print, double));
				comma = ", ";
				break;
			case 's':
				string = va_arg(print, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", comma, string);
				comma = ", ";
				break;
		}
		count++;
	}
	printf("\n");
	va_end(print);
}
