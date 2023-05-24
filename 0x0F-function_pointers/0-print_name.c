#include "function_pointers.h"

/**
  * print_name - function name prints the name
  * @name: the name to print
  * @f: the pointer to function
  * Return: always void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
