#include "variadic_functions.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("s", NULL);
	print_all("fcsi", 3.14435, 'H', NULL, 402);
	print_all("qwertyuopadghjklzxvbnm");
    	return (0);
}
