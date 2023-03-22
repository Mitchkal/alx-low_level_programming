#include "main.h"

/**
 * print_last_digit - calculates the last digit of a number
 *
 * Return: int
 *@n: number to find lastdigit
 */
int print_last_digit(int n)
{
	int t;

	if (n > 0)
	{
		t = n % 10;
		_putchar (t + 48);
		return (t);
	}
	else
	{
		t = -1 * (n % 10);
		_putchar(t + 48);
		return (t);
	}
}
