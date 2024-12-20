#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A fluffy friend
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: a Dog that has a name, age and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int get_length(char *string);
void free_dog(dog_t *d);

#endif
