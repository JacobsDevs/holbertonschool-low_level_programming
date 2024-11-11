#include <stdlib.h>

/**
 * string_nconcat - return a concatenated string with s1 and the first n bytes
 * of s2
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 * @n: Number of bytes in second string to concatenate
 *
 * Return: Pointer to the newly allocated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	len = i + n + 1;
	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);
	j = 0;
	while (s1[k] != '\0')
	{
		concat[k] = s1[k];
		k++;
	}
	while (j < n)
	{
		concat[k] = s2[j];
		k++;
		j++;
	}
	concat[k] = '\0';
	return (concat);
}
