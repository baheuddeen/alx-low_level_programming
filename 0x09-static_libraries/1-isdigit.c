#include "main.h"

/**
 * _isdigit -  hecks for a digit (0 through 9).
 * @c: characte to check.
 * Return: 1 if it's a digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
