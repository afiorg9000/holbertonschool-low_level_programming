#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the int size of the square.
 */

void print_square(int size)
{
	int l, s;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
