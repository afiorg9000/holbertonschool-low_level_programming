#include "main.h"

void print_alphabet_x10(void)
{
	char ch;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			if (ch == 'z')
			{
				_putchar('\n');
			}
		}
	}
}
