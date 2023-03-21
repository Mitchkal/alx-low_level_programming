#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void (succcess)
 *
 */
void print_alphabet(void)
{
	char letter = 'a';
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar(letter + n);
	}
	_putchar(10);
}
