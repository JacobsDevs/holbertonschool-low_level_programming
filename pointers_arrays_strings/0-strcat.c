/**
 * _strcat - Concatenates two strings
 * @dest: The string to be returned completed
 * @src: The string to be appended to dest
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *cat = dest;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (cat);
}
