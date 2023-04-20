#include <stdarg.h>
/**
 * sum_them_all - sums all passed arguments
 * @n : the last constant element
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ptr;
	unsigned int i, sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);


}
