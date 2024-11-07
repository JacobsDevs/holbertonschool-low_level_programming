#include <stdio.h>
/**
 * main - Print all arguments including file name to the screen
 * @argc: Count of CL arguments
 * @argv: Array of CL arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
