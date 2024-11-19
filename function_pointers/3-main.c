#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - performs desired operation on num1 and num2
 * @argv: number of args
 * @argc: array of args
 *
 * Return: 0 for OK!
 */

int main(int argv, char *argc[])
{
	int (*func_ptr)(int a, int b);
	int num1 = atoi(argc[1]);
	char *operator = argc[2];
	int num2 = atoi(argc[3]);

	if (argv != 4)
	{
		printf("Error\n");
		printf("%d", argv);
		exit(98);
	}
	func_ptr = get_op_func(operator);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == "/"[0] || *operator == "%"[0]) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func_ptr(num1, num2));
	return (0);
}
