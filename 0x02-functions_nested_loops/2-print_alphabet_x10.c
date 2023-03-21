#include "main.h"

/**
 * main-Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int k = 0;
	char letter = 'a';
	int n;

	while (k < 10)
	{
		for (n = 0; n < 26; n++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('/n');
	}

	return (0);
}
