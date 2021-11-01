#include "dog.h"


/**
 * print_dog - prints a struct dog
 * @d: pointer of the dog
 */
void print_dog(struct dog *d)
{
	/*if statement: if the variable pointer 'd' is 'NULL'*/
	if (d == NULL)
		return;
	/*if statement: if the element 'name' of 'd' is equal to*/
	 /*NULL*/
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	/*if statement: if the element 'owner' of 'd' is equal to*/
	 /*'NULL'*/
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
