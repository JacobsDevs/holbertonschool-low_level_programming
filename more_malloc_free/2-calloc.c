#include <stdlib.h>

/**
 * _calloc - returns allocated memory of size nmemb * size set to 0
 * @nmemb: Number of elements
 * @size: Size of the element
 *
 * Return: Pointer to the array or NULL for failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	while (i < nmemb)
	{
		array[i] = 0x00;
		i++;
	}
	return (array);
}
