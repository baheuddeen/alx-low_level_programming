#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: (0) on success.
 */

int main(int argc, char *argv[])
{
	int first_number = 0, second_number = 0, result = 0;
	int (*operation_fun)(int, int);
	char *op = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	operation_fun = get_op_func(op);

	if (operation_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	first_number = atoi(argv[1]);
	second_number = atoi(argv[3]);
	result = operation_fun(first_number, second_number);

	printf("%d\n", result);
	return (0);
}
