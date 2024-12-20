#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print the sum of numbers to the terminal
 * @argc: Count of CL arguments
 * @argv: Array of CL arguments
 *
 * Return: 0 for success or 1 for non number in argv
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int sum = 0;
	int num;

	(void)argc;
	while (i < argc)
	{
		num = atoi(argv[i]);
		if (isdigit(num) == 0)
			sum += num;
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
