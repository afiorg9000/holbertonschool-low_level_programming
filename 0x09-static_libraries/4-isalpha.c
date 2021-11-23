#include "main.h"

/**
 * _isalpha - cheacks for alphabetic characters
 * @c: character to be checked if alpha
 * Return: 1 if c is an alphabet else 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
