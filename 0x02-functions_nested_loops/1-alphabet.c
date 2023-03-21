#include "main.h"

/**
 * main-Entry point
 *
 * Return: Alwyas 0 (succcess)
 *
 */
int main(void)
{
	char letter = 'a';
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('/n');

	return (0);
}
