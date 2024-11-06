/**
 * _strstr - Find the first occurence of needle in haystack
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of needle in haystack
 * or NULL for not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k;
	int match = 0;

	while (haystack[i] != '\0')
	{
		j = k = 0;
		if (haystack[i] == needle[j])
			match = 1;
		while (match == 1 && haystack[i + k] != '\0' && needle[j + k] != '\0')
		{
			if (haystack[i + k] == needle[j + k])
				k++;
			else
				match = 0;
		}
		if (match == 1)
			return (haystack + i);
		i++;
	}
	return (0);
}
