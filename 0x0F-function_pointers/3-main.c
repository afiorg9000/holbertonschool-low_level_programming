#include "3-calc.h"
/**
 * main - recieves basic calculations arguments
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	int v1, v2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[3] == '0') && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	v1 = atoi(argv[1]);
	v2 = atoi(argv[3]);

	printf("%d\n", f(v1, v2));

	return (0);
}
