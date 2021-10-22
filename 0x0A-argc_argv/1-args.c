#include <stdio.h>

/**
 * main- prints the numbers of arguments passed.
 * @argc:number of arguments being passed into your program.
 * @argv:  is the array of arguments.
 * Return: o
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
