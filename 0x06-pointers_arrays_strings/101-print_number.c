#include "main.h"

/**
 * print_number - print an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double num = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (num <= positive)
			num *= 10;
		tens = num / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
