#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(char *ptypes, ...);
/**
 * struct parser
 * @ptype: The type to parse
 * @f: The function associated
 */
typedef struct parser
{
	char *ptype;
	int (*f)(va_list *ap);
} parser_t;
int print_char(va_list *ap);
int print_int(va_list *ap);
int print_float(va_list *ap);
int print_string(va_list *ap);
int (*get_parser_func(char s))(va_list *);

#endif
