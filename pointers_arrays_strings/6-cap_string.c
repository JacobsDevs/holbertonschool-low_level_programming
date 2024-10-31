/**
 * check_seperator - Checks if a character is a valid seperator
 * @c: The character to check
 *
 * Return: (1) valid seperator, (0) invalid seperator
 */

int check_seperator(char c)
{
	int sep[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i = 0;

	while (i < 13)
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words in a string
 * Acceptable seperators of words are: Space, \t, \n, comma, ;, ., !, ?, \", (,
 * ), { & }
 * @a: Pointer to the start of the string
 *
 * Return: Pointer to the start of the string
 */

char *cap_string(char *a)
{
	int i = 0;
	/* sow = Start of Word*/
	int sow = 1;

	while (a[i] != '\0')
	{
		if (sow == 1 && (a[i] > 96 && a[i] < 123))
		{
			sow = 0;
			a[i] = a[i] - 32;
		}
		else if (sow == 1 && (a[i] > 64 && a[i] < 91))
			sow = 0;
		else
			sow = check_seperator(a[i]);
		i++;
	}
	return (a);
}
