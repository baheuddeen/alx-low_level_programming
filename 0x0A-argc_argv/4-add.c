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
	int sum = 0, i = 1;

	while (i < argc)
	{
		if (is_digits(argv[i]) != 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
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
	if (!isdigit(*s))
		return (0);
	return (is_digits(++s));
}
