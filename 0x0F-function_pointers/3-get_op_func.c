#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation s.
 * @s: operation.
 * Return: pointer to the operation function or Null is not exist.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
