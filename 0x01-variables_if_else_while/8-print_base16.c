#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
	int n, i;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
