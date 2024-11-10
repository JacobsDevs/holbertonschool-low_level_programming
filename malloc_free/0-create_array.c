#include <stdlib.h>
/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: Size of array to allocate in memory
 * @c: Character to initialize array with
 *
 * Return: Pointer to the array or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';
	return (array);
}
