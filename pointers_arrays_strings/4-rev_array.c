/**
 * reverse_array - return a reversed array
 * @a: The array to reverse
 * @n: The length of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;
	n = n - 1;

	while (i < n)
	{
		tmp  = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
