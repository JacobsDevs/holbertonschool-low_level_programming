#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees do from memory
 * @d: The dog to free.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
}
