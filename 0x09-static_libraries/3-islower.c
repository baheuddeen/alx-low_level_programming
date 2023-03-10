#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * @c: char to check.
 *
 * Return: 1 (is a lower) and 0 (not a lower)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (TRUE);
	}
	return (FALSE);
}
