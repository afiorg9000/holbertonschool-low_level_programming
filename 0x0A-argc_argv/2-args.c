#include <stdio.h>

/**
 *main - prints all arguments it receives.
 * @argc:number of arguments being passed into your program.
 * @argv:  is the array of arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
