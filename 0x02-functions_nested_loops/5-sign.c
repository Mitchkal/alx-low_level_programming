#include "main.h"

/**
 *print_sign -checks if the character is lowercase  on its ASCII value
 *
 * Return: 1 if its positive  or  Alwyas -1 if not and 0 if 0
 * @n: the number n
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0')
		return (0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
