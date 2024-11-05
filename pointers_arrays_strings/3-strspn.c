/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: The string to check
 * @accept: The allowed bytes in the string
 *
 * Return: the number of bytes acceptable
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k;
	int nomatch;

	while (accept[i] != '\0')
		i++;

	while (s[j] != '\0')
	{
		for (k = 0; k < i; k++)
		{	nomatch = 0;
			if (s[j] == accept[k])
			{
				nomatch = 1;
			}
		}

		if (nomatch == 0)
			return (j);
		j++;
	}
	return (0);
}
