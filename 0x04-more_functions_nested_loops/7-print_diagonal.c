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
		for (line = 0; line <= n; line++)
		{
			for (space = 0; space <= line; space++)
			{
				if (space != 0)
					_putchar(' ');
				if (space == line)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}

	}

}
