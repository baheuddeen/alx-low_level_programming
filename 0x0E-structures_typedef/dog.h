#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: dog name.
 * @age: dog age.
 * @owner: the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
