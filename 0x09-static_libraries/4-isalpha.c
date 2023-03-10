#include "main.h"
#define TRUE 1
#define FALSE 0

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
