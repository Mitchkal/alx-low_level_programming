#include "main.h"

/**
*print_most_numbers - prints the value is a digit
*
*
*Return: void
*/

void print_most_numbers(void)
{
	int num = 0;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
		{
			continue;
		}

		else
		{
			_putchar(num);
		}
		-putchar('/n');
	}
}
