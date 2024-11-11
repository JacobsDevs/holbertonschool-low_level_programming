#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - returns allocated memory of size nmemb * size set to 0
 * @nmemb: Number of elements
 * @size: Size of the element
 *
 * Return: Pointer to the array or NULL for failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;
	int len = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	array = malloc(len + size);
	
	if (array == NULL)
		return (NULL);
	i = 0;
	
	while (array[i] != '\0')
	{
		array[i] = 0;
		i++;
	}
	
	return (array);
}
