#include "3-calc.h"
/**
 * get_op_func - selects the ideal function.
 * @s: the operator that is passed
 * Return: returns a pointer
 * to the function correspondent to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if ((*ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
