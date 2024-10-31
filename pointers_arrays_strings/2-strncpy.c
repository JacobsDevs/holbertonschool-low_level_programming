/**
 * _strncpy - Copy n characters from src to dest
 * @dest: Location to copy to
 * @src: Location to copy from
 * @n: Amount of characters to copy
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int evalsrclen = 0;
	/* If we're not at the end of n */
	while (i < n)
	{

		if (src[i] != '\0' && evalsrclen == 0)
			dest[i] = src[i];
		else if (evalsrclen == 1)
			dest[i] = 0;
		else
		{
			dest[i] = 0;
			evalsrclen = 1;
		}
		i++;
	}
	return (dest);
}
