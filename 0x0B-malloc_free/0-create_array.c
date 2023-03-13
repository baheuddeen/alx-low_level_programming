#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: soze of the array.
 * @c: default char.
 * Return: pointer to the array, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *pt_char;
	unsigned int i;

	pt_char = (char *)malloc(sizeof(char) * size);
	if (!pt_char)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		pt_char[i] = c;
	}
	return (pt_char);
}
