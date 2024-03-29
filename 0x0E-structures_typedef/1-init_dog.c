#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the variable -dog- .
 * @name: dog name.
 * @age: dog age.
 * @owner: the dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
