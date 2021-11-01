#include "dog.h"
/**
 * init_dog - initialize the dog
 * @d: dog
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
