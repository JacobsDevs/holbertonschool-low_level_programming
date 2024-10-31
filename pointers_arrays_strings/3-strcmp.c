/**
 * _strcmp - Compares 2 string returning a negative int if s1 < s2
 * a positive int if s1 > s2 and 0 if s1 == s2
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: an int resembling the difference between s1 & s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
