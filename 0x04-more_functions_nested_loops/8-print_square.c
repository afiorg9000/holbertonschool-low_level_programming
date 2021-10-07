#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the int size of the square.
 */

void print_square(int size)
{
	int l, s;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (s = 0; s < size; s++)
				_putchar('#');
			if (l == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
