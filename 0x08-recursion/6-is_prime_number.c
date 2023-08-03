#include "main.h"
/**
* is_prime_number - checks if input number is a prime number
* @n : the number
* Return: whether prime number or not
*/

int is_prime_number(int n)
{
	static int divisor = 2;

	if (n == 0 || n == 1)
	{
		return (0);
	}

	if (n == divisor)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	divisor++; 

	return (is_prime_number(n));

}
