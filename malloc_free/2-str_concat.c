#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = i + j - 1;
	concat = malloc(sizeof(char) * len + sizeof(char));
	if (concat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		concat[k] = s2[j];
		j++;
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
