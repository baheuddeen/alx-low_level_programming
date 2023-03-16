#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int is_digits(char *s);
void multiply(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: argument vector.
 * Return: 0 on success otherwise 1.
 */
int main(int argc, char **argv)
{
	char *num1 = NULL, *num2 = NULL;
	char *res = NULL;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (is_digits(num1) != 1 || is_digits(num2) != 1)
	{
		printf("Error\n");
		exit(98);
	}
	multiply(num1, num2);
	return (0);
}

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer that represents memory
 *     block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 * Return: A pointer to the filled memory area
 */
void *_memset(int *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * multiply - multiply two char array.
 * @num1: first num.
 * @num2: second num.
 */
void multiply(char *num1, char *num2)
{
	int l1 = 0, l2 = 0;
	int i = 0, j = 0;
	int *res = NULL;
	char *sum = NULL;

	while (num1[l1])
		l1++;

	while (num2[l2])
		l2++;

	res = malloc(sizeof(*res) * (l1 + l2));
	if (!res)
		exit(98);

	_memset(res, 0, (l1 + l2));
	sum = malloc(sizeof(*sum) * (l1 + l2));
	if (!res)
	{
		free(res);
		exit(98);
	}

	for (i = l1 - 1; i >= 0; i--)
	{
		for (j = l2 - 1; j >= 0; j--)
		{
			res[i + j + 1] += (num2[j] - '0') * (num1[i] - '0');
		}
	}

	for (i = l1 + l2 - 1; i >= 0; i--)
	{
		if (res[i] >= 10)
		{
			res[i - 1] += res[i] / 10;
			res[i] %= 10;
		}
	}

	i = 0;
	while (res[i] == 0)
		i++;

	j = 0;
	while (i < l1 + l2)
	{
		sum[j] = res[i] + '0';
		i++;
		j++;
	}

	printf("%s\n", sum);
	free(sum);
	free(res);
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
