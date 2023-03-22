#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: pointer to the operation function.
 */

int main(int argc, char *argv[])
{
	int first_number = 0, second_number = 0, result = 0;
	int (*operation_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation_fun = get_op_func(argv[2]);

	if (operation_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	first_number = atoi(argv[1]);
	second_number = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && second_number == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation_fun(first_number, second_number);
	printf("%d\n", result);
	return (0);
}
