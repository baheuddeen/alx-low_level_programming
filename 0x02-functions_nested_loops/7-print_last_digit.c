#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: integr number.
 *
 * Return: 1 (if true) and 0 (if false)
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);
	last_digit = last_digit < 0 ? -1 * last_digit : last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
