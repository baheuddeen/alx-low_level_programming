#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the opcodes of its own main function.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i = 0, size = 0;
	int (*p_main)(int, char **);

	p_main = main;
	p_main += 4;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		int value = *((unsigned char *)(p_main) + i);
		if (i != size - 1)
		{
			printf("%x ", value);
		}
	}
	printf("\n");
	return (0);
}
