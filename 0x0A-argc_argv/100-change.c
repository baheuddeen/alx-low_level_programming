#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int is_digits(char *);

/**
 * main - entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0 on success otherwise 1.
 */
int main(int argc, char *argv[])
{
	int number, i;
	int cents[] = {25, 10, 5, 2, 1};
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (is_digits(argv[1]) != 1)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5 && number; i++)
	{
		result += number / cents[i];
		number = number % cents[i];
	}
	printf("%d\n", result);
	return (0);
}


/**
 * is_digits - check is the string contains char.
 * @s: string to check.
 * Return: 0 is digits only, otherwise 1.
 */
int is_digits(char *s)
{
	if (!*s)
		return (1);
	if (!isdigit(*s) && *s != '-')
		return (0);
	return (is_digits(++s));
}
