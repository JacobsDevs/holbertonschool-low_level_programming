#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
unsigned int convert_binary(const char *s, unsigned int count, int len);
int power(int base, int exp);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif


