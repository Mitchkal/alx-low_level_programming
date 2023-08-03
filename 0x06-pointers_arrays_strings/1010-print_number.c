#include "main.h"
/**
 * print_number - prints a number
 * @n : the number
 */

void print_number(int n)
{
	int digit;
	char c;

	int length = 0;
	int copy = n;

	if (n < 0)
	{
		_putchar('-');
		copy = -n;
	}

	while (copy != 0)/*find number length*/
	{
		length++;
		copy /= 10;
	}
	if (length == 0)
	{
		_putchar('0');
	}

	while (length >= 0)
	{
		digit = (n / (int) pow(10, length - 1)) % 10;/*extract digit*/
		c = digit + '0';
		_putchar(c);
		length--;
	}

}
