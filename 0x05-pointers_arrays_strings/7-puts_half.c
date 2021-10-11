#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int half, i = 0, j = 0;

	while (str[i++])
		j++;

	if ((j % 2) == 0)
		half = i / 2;

	else
		half = (j + 1) / 2;

	for (i = half; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
