#include <stdio.h>
/**
 * main - Print the name of the file to the screen
 * @argc: Count of CL arguments
 * @argv: Array of CL arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
