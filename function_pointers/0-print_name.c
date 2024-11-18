/**
 * print_name - prints a name in the way the f function wants to be printed
 * @name: Pointer to the name to print.
 * @f: Pointer to the function to use to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
