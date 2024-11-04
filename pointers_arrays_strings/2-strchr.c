/**
 * _strchr - Returns a pointer to the first occurence of c in s or NULL if
 * not found.
 * @s: pointer to the start of the string
 * @c: char to search for
 *
 * Return: Pointer of c in s or 0 if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *null = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (null);
}
