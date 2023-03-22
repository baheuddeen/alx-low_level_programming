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
	char *p_main = (char *)main;

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
		printf("%02x", p_main[i] & 0xFF);
		if (i != size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
