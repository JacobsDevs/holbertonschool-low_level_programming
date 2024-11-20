#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - parses through the args and prints them in their type
 * @ptypes: Key to the type each arg will be
 */

void print_all(char *ptypes, ...)
{
	va_list ap;
	va_list *apptr = &ap;
	int i = 0;
	void (*func_ptr)(va_list *apptr);

	va_start(ap, ptypes);
	while (ptypes[i] != '\0')
	{
		func_ptr = get_parser_func(ptypes[i]);
		if (func_ptr != NULL && ptypes[i + 1] != '\0')
		{
			func_ptr(apptr);
			printf(", ");
		}
		i++;
	}
	func_ptr(apptr);
	printf("\n");
}

/**
 * get_parser_func - Returns the function pointer to the approporiate print
 * function.
 * @s: Character of the ptype
 *
 * Return: a pointer to the function you want to use.
 */
void (*get_parser_func(char s))(va_list *ap)
{
	parser_t parser[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;

	while (parser[i].ptype != NULL)
	{
		if (parser[i].ptype[0] == s)
		{
			return (parser[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * print_char - Prints a char to the screen
 * @ap: va_list to read
 */

void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_int - Prints an int to the screen
 * @ap: va_list to read
 */

void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
 * print_float - Prints a float to the screen
 * @ap: va_list to read
 */

void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
 * print_string - Prints a string to the screen
 * @ap: va_list to read
 */

void print_string(va_list *ap)
{
	printf("%s", va_arg(*ap, char *));
}

