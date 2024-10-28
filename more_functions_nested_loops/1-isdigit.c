/**
 * _isdigit - returns 1 if character is a digit
 * @c: the digit to be checked.
 *
 * Return: 1 for digit or 0 otherwise.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
