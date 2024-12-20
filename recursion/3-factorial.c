/**
 * factorial - Returns the factorial of n
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
