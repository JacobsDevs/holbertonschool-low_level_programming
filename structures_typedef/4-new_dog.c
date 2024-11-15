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
	char *namecpy = malloc(sizeof(char) * get_length(name));
	char *ownercpy = malloc(sizeof(char) * get_length(owner));
	int i = 0;

	if (pup == NULL || namecpy == NULL || ownercpy == NULL)
	{
		free(pup);
		free(namecpy);
		free(ownercpy);
		return (NULL);
	}

	while (i < get_length(name))
	{
		namecpy[i] = name[i];
		i++;
	}
	i = 0;
	while (i < get_length(owner))
	{
		ownercpy[i] = owner[i];
		i++;
	}
	pup->name = namecpy;
	pup->age = age;
	pup->owner = ownercpy;
	return (pup);
}

/**
 * get_length - returns the length of characters in a string
 * @string: The string to measure.
 *
 * Return: The length of the string or NULL if string inapproporiate.
 */

int get_length(char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;
	return (i + 1);
}
