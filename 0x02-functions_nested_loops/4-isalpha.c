#include "main.h"

/**
 * _isalpha - check if char is alpha
 *
 * @c: char to ckeck.
 *
 * Return: 1 (if true) and 0 (if false)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (TRUE);
	}
	return (FALSE);
}
