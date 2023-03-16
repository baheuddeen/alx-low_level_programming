#include <stdlib.h>
#include "main.h"

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
		*(int *)arr = 0;
	}

	return (arr);
}
