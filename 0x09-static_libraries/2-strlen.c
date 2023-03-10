#include "main.h"

/**
 * _strlen - pdates the value it points to to 98.
 * @s: string.
 * Return: the length of the string.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
