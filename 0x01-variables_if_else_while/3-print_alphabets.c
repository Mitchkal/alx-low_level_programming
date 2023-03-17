#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int letter = 'a';
	int upper = 'A';

	for (n = 0; n < 26; n++)
	{
		putchar(letter);
		letter++;
	}

	for (n = 0; n < 26; n++)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
