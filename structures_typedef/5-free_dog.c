#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees do from memory
 * @d: The dog to free.
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
