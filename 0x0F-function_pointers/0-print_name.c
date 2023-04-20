#include "function_pointers.h"
/**
 * print_name - printaname
 * @name  : the name
 * @f : the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
