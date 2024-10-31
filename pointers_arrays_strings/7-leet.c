/**
 * valid_checker - Checks for a A e E o O t T l L
 * @c: The letter to check
 *
 * Return: negative required to reach 1337 int For valid (0) for not
 */

int valid_checker(char c)
{
	char valids[20] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int keys[10] = {45, 13, 50, 18, 63, 31, 61, 29, 59, 27};
	int i = 0;

	while (i < 20)
	{
		if (c == valids[i])
			return (keys[i]);
		i++;
	}
	return (0);
}

/**
 * leet - convert a e o t l to 4 3 0 7 1
 * @a: Pointer to the start of the string to convert
 *
 * Return: Pointer to the start of the string
 */

char *leet(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		a[i] = a[i] - valid_checker(a[i]);
		i++;
	}
	return (a);
}
