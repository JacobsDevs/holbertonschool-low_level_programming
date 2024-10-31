/**
 * string_toupper - Converts all lowercase characters in a string to uppercase
 * @a: Pointer to the first letter in the string
 *
 * Return: Pointer to the first letter of the uppercased string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] > 96 && a[i] < 123)
			a[i] = a[i] - 32;
		i++;
	}

	return (a);
}
