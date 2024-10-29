/**
 * swap_int - takes two pointers and swaps the values of each
 * @a: The first pointer to be swapped
 * @b: The second pointer to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
