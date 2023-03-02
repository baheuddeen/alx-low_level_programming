void push_char(char c, char *s);

/**
 * infinite_add - add two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: where results go.
 * @size_r: size of result.
 * Return: pointer to result (success) or 0 failed.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_length = 0, n2_length = 0;
	int i = 0, carry = 0;

	while (n1[n1_length++])
		;
	while (n2[n2_length++])
		;
	if (n1_length >= size_r || n2_length >= size_r)
	{
		return (0);
	}

	/** set r to zeros*/
	for (i = size_r - 1; i >= 0; i--)
	{
		r[i] = '\0';
	}
	/** r = n1 + n2 */
	for (i = 2; i <= size_r; i++)
	{
		int sum = '\0';

		if (i <= n1_length)
			sum += n1[n1_length - i] - '0';
		if (i <= n2_length)
			sum += n2[n2_length - i] - '0';
		sum += carry;
		if (sum)
		{
			push_char((sum % 10) + '0', r);
			carry = sum / 10;
		}
	}
	return (r);
}

/**
 * push_char - append char to first index
 * @c: char to add
 * @s: string
 */
void push_char(char c, char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	while (i > 0)
	{

		*s = *(s - 1);
		s--;
		i--;
	}
	*s = c;
}
