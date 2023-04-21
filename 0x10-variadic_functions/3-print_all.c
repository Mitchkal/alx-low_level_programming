#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints verything .
 * @format: argumenta passed
 */
void print_all(const char * const format, ...)
{
	if (format == NULL)
		return;

	va_list valist;
	unsigned int i = 0;
	char *separator = "";
	const char *str;
	const char *s;

	va_start(valist, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(valist, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(valist, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(valist, double));
				break;
			case 's':
				s = va_arg(valist, const char *);
				str = s ? s : "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				break;
		}

		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(valist);
}
