/**
 * solver - adds odd numbers to the sum until n is reached or passed
 * @n: The target number
 * @num: The odd number to add
 * @sum: The sum of all the previous nums
 *
 * Return: the number of iterations the solver has been through
 */

int solver(int n, int num, int sum)
{
	sum += num;
	if (n == sum)
		return (0);
	else if (n < num)
		return (-1);
	return (1 + solver(n, num + 2, sum));
}

/**
 * _sqrt_recursion - find the square root of n
 * @n: The number to find the root of
 *
 * Return: The sqrt of n or -1 for no sqrt
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);

	root = solver(n, 1, 0) + 1;

	if (root * root == n)
		return (root);
	else
		return (-1);
}
