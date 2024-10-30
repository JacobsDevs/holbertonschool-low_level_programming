/**
 * _strncat - Concatenates two strings up to a limit of n bytes on the second
 * string.
 * @dest: The string to be returned completed
 * @src: The string to be appended to dest
 * @n: The number of bytes to append
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *cat = dest;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (cat);
}
