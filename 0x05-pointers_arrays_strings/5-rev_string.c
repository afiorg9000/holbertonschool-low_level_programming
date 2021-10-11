#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char tmp;

	a = b = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a > b)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		b++;
		a--;
	}
}
