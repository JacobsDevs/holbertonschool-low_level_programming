/**
 * _strlen - Returns the length of the given string
 * @s: The string to measure
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
