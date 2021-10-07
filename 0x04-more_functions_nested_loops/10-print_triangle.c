#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int l, s;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (s = size - l; s > 0; s--)
				_putchar(' ');

			for (s = 0; s < l; s++)
				_putchar('#');

			if (l == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
