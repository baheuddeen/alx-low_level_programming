#include "dog.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * free_dog - free a struct dog.
 * @d: pointer to the variable -dog- .
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}

	free(d);
}
