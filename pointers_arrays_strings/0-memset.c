/**
 * _memset - Fills the first n bytes of memory starting at s with the constant
 * b
 * @s: Location of the first piece of memory
 * @b: The byte to fill that location with
 * @n: The number of bytes to fill
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
