#include "main.h"
/**
* is_prime - checks if input number is a prime number
* @n : the number
* @divisor : the divisor
* Return: 1 if prime number, else returns 0/recalls function
*/

int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}
/**
* is_prime_number - checks if input number is a prime number
* @n : the number
* Return: 1 if prime number, else returns 0
*/
int is_prime_number(int n)
{
	int divisor = 3;
	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divisor));

}
