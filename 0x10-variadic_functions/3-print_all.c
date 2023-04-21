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

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints verything .
 * @format: argumenta passed
 */
void print_all(const char * const format, ...)
{
	char *separator;
	va_list valist; /*pointer to argument list*/
	int k, l;

	l = 0;
	separator = "";


	datatype choose[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };


	va_start(valist, format);

	while (format != NULL && format[l] != '\0')
	{
		k = 0;

		while (choose[k].letter != '\0')
		{
			if (choose[k].letter == format[l])
			{
				printf("%s", separator);
				choose[k].func(valist);
				separator = ", ";
			}

			k++;
		}

		l++;
	}
	va_end(valist);
	printf("\n");
}
