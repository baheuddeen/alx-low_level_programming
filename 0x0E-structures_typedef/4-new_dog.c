#include "dog.h"
#include "stdlib.h"
#include <string.h>

/**
 * new_dog - create an instance of type dog_t.
 * @name: dog name.
 * @age: dog age.
 * @owner: the dog owner.
 * Return: pointer to the created dog or NULL on faild.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp = NULL;
	char *temp_name = NULL, *temp_owner = NULL;

	temp = malloc(sizeof(dog_t));
	if (!temp)
	{
		return (NULL);
	}

	temp_name = malloc(strlen(name) + 1);
	if (!temp_name)
	{
		free(temp);
		return (NULL);
	}

	temp_owner = malloc(strlen(owner) + 1);
	if (!temp_owner)
	{
		free(temp);
		free(temp_name);
		return (NULL);
	}

	strcpy(temp_name, name);
	strcpy(temp_owner, owner);

	temp->name = temp_name;
	temp->age = age;
	temp->owner = temp_owner;

	return (temp);
}
