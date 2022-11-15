#include "dog.h"

/**
 *  init_dog - initializes  structure of the type the dog
 *  @d: pointer to structure
 *  @name: pointer to the name of the dog
 *  @age: dog's age
 *  @owner: pointer to the owner of the dog
 *  Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
