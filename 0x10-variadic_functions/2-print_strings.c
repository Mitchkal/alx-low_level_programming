#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings passed to it
 * @separator : the separator
 * @n : number of params
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	if (n > 0)
	{

		va_start(ptr, n);

		for (i = 1; i <= n; i++)
		{
			s = va_arg(ptr, char *);

			if (s ==  NULL)
				printf("(nil)");

			printf("%s", s);

			if (separator != NULL && i < n)

				printf("%s", separator);
		}

		va_end(ptr);
	}
	printf("\n");

}
