#include <stdlib.h>

/**
 * array_range - Return a pointer to an array that has all the ints from min
 * to max.
 * @min: The int to start at.
 * @max: the int to finish at.
 *
 * Return: Pointer to the int array or NULL if failed.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *array;
	int length = max - min + 1;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	for (; i < length; i++)
		array[i] = min + i;
	return (array);
}
