#include "main.h"
#include <stddef.h>

/**
 *power - calculates an exponent
 *@base: the base of the exponent
 *@power: what to raise the base to
 *
 *Return: the exponent value
 */
int power(int base, int power)
{
	int exponent = 1;

	for (; power > 0; exponent *= base, power--)
	;
	return (exponent);
}
/**
 *binary_to_uint - converts a binary number to unsigned int
 *@b: a pointer to a string of 0 and 1 characters
 *
 *Return: the integer conversion, or 0 if there is a non-one or non-zero
 *character or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (; *(b + i) != '\0'; i++)
	;
	i--;
	for (; i >= 0; j++, i--)
	{
		if (*(b + j) != '0' && *(b + j) != '1')
			return (0);
		num += ((*(b + j) - '0') * power(2, i));
	}
	return (num);
}
