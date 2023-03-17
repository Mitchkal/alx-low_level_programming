#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int letter = 'z';

	for (n = 0; n < 26; n++)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
