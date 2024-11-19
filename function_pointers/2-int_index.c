#include <stdlib.h>
/**
 * int_index - Return the index of an array where an int exists with a function
 * pointer.
 * @array: Pointer to the array to iterate through
 * @size: Size of the array to search
 * @cmp: Function to use to search
 *
 * Return: -1 for no matches or negative size, element of array for found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0 || array == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
