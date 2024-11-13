#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Intitializes a dog struct with the given parameters.
 * @d: Pointer to the dog struct
 * @name: dog's desired name
 * @age: dog's desired age
 * @owner: dog's desired owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
