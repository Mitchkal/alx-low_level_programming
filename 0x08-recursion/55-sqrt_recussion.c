#include "main.h"
/**
* _sqrt_recursion - finds square root of number
* @n : the number
* Return: the square root
*/

int _sqrt_recursion(int n)

{
	int new_guess;
	int guess;

	if (n == 0 || n == 1)
	{
		return (n);
	}

	guess = n / 2;

	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (_sqrt_recursion(guess / 2));
	}
	else
	{
		new_guess = (guess + n / guess) / 2;
		if (new_guess >= guess)
		{
			return (-1);
		}
		return (_sqrt_recursion(new_guess));
	}
}
