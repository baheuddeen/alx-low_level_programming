#include<stdio.h>

/**
 * main - entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
