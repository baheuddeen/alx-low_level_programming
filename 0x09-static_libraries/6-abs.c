#include "main.h"

/**
 * _abs - get the absolute value of a number.
 *
 * @n: target number.
 *
 * Return: the abs value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	/**
	 * easy one
	 *
	 * return (n * -1);
	 */

	return (~n + 1);
}
