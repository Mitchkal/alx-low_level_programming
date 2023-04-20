#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print a name using function poiter
 * @name : the name to print
 * @f : the function pointer to use for printing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
