#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to the allocated section of memory
 * @b: number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	else
		return (m);
}
