#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 *
 * Return: int
 *@n: integer to find absolute
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
