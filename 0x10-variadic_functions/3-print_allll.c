#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print character
 * @valist: variable list
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - print an int
 * @valist: variable list
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - print a float
 * @valist: variable list
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - print a string
 * @valist: variable list
 */
void print_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints verything .
 * @format: argumenta passed
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j;
	char *separator = "";
	datatype choose[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL}
	};


	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && choose[j].letter != format[i])
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			choose[j].func(valist);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(valist);
}
