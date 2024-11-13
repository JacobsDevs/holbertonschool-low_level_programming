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
	dog_t new_dog;
	dog_t *ptr = &new_dog;
	char *dog_name = name;
	char *dog_owner = owner;
	
	ptr->name = dog_name;
	ptr->age = age;
	ptr->owner = dog_owner;

	return (ptr);
}
