#include<stdio.h>

/**
 * main - entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
