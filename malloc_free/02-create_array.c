#include <stdlib.h>
/**
 * create_array - Creates an array of chars and returns a pointer to the
 * array.
 * @size: The size of the array
 * @c: The char to fill the array with
 *
 * Return: The pointer to the start of the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
