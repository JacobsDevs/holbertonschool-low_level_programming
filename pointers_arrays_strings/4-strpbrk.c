/**
 * _strpbrk - Return a pointer to the first occurence of any of the bytes
 * in accept in s
 * @s: The string to search
 * @accept: The valid bytes we're looking for
 *
 * Return: A pointer to the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k;

	while (accept[j] != '\0')
		j++;

	while (s[i] != '\0')
	{
		for (k = 0; k < j; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
		i++;
	}
	return (0);
}
