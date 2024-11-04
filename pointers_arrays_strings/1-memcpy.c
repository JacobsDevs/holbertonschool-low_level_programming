/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: pointer to start of destination in memory
 * @src: pointer to start of source in memory
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
