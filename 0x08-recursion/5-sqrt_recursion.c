#include "main.h"
int _sqrt_recursion_v2(int n, int c);

/**
 * _sqrt_recursion - get the natural square root of a number.
 * @n: number.
 * Return:  the natural square root of a number
 * or -1 if not Exist.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_recursion_v2(n, 1));
}

/**
 * _sqrt_recursion_v2 - get the natural square root of a number.
 * @n: number.
 * @c: counter.
 * Return:  the natural square root of a number
 * or -1 if not Exist.
 */

int _sqrt_recursion_v2(int n, int c)
{
	if (n < c * 2)
	{
		return (-1);
	}
	if (c * c == n)
		return (c);
	return (1 * _sqrt_recursion_v2(n, c + 1));
}
