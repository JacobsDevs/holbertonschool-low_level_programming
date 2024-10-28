/**
 * _isupper - returns 1 if character is uppercase and 0 if character is
 * lowercase.
 * @c: the character to be checked.
 *
 * Return: 1 for uppercase or 0 for lowercase.
 */

int _isupper(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
