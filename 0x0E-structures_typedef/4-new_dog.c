#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - create an instance of type dog_t.
 * @name: dog name.
 * @age: dog age.
 * @owner: the dog owner.
 * Return: pointer to the created dog or NULL on faild.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp = malloc(sizeof(dog_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->name = name;
	temp->age = age;
	temp->owner = owner;

	return (temp);
}
