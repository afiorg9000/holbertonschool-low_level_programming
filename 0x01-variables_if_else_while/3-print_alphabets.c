#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
char ch;
char CH;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (CH = 'A' ; CH <= 'Z' ; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
