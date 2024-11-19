#include <stddef.h>
/**
 * array_iterator - Iterate over an array and do action to it
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to use on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
