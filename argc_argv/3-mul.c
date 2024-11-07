#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the product of two numbers to the terminal
 * @argc: Count of CL arguments
 * @argv: Array of CL arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
