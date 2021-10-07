#include "main.h"

/**
 *print_diagonal-draws a diagonal line using the \ character.
 *@n: The number of \ characters to be printed.
 *
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (space = 1; space < n; space++)
		{
			for (line = 1; line < space; line++)
			{
				if (line != 1)
					_putchar(' ');
				if (line == space)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}

	}
	else
		_putchar('\n');
}
