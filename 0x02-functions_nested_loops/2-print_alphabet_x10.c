#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
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
		_putchar('\n');
	}
}
