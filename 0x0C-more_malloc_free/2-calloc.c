#include <stdlib.h>
#include "main.h"
char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of array's member.
 * @size: size of the array member.
 * Return: pointer to the array, otherwise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		/* we should cast here..*/
		_memset(arr, 0, nmemb * size);
	}

	return (arr);
}



/**
 * _memset - fills memory with a constant byte
 * @s: input pointer that represents memory
 *     block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
