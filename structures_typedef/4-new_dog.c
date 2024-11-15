#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog of type dog_t
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup = malloc(sizeof(struct dog));
	if (pup == NULL)
		return (NULL);
	pup->name = name;
	pup->age = age;
	pup->owner = owner;
	return (pup);
}
