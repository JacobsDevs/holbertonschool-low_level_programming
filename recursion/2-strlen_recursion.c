/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int value = 1;

	if (*s == '\0')
		return (0);

	return (value + _strlen_recursion(s + 1));
}
