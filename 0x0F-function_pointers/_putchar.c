#include <unistd.h>

/**
 * _putchar - print char
 *
 * @c: char to print.
 *
 * Return: 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
