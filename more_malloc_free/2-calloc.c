#include <stdlib.h>

/**
 * _calloc - returns allocated memory of size nmemb * size set to 0
 * @nmemb: Number of elements
 * @size: Size of the element
 *
 * Returns: Pointer to the array or NULL for failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	while (array[i] != '\0')
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
