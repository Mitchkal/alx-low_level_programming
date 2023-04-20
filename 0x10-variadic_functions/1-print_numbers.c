#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passed to it
 * @separator : the separator
 * @n : number of params
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n > 0)
	{

		va_start(ptr, n);

		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ptr, int));

			if (separator != NULL && i != n)

				printf("%s", separator);
		}

		va_end(ptr);
	}
	printf("\n");

}
