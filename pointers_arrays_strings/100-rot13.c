/**
 * rotate - takes a character and returns a rot 13d character
 * @c: Character to rotate
 *
 * Return: Rotated character
 */

char rotate(char c)
{
	int i = 0;
	int j = c;

	while (j > 26)
	{
		i++;
		j -= 32;
	}
	j = ((j + 12) % 26) + 1;
	return (j + (i * 32));
}

/**
 * rot13 - rotates characters 13 places
 * @a: Pointer to start of string
 *
 * Return: Pointer to start of string
 */

char *rot13(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((a[i] > 96 && a[i] < 123) || (a[i] > 64 && a[i] < 91))
			a[i] = rotate(a[i]);
		i++;
	}
	return (a);
}
