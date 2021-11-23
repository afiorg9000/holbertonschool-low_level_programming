#include "main.h"

/**
 * _strlen - prints string length
 * @s: string length
 * Return: n
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
