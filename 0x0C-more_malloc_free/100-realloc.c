#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to malloc.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 * Return: pointer to the array, otherwise NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);

	if (!ptr)
		return malloc(new_size);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (new_ptr);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	for (i = old_size; i < new_size; i++)
	{
		*((char *)new_ptr + i) = 0;
	}

	return (new_ptr);
}
