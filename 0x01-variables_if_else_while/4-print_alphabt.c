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

	for (n = 0; n < 24; n++)
	{
		putchar(letter);
		letter++;
		if (letter == 'q' || letter == 'e')
			{
			letter++;
			continue;
			}
	}
	putchar('\n');

	return (0);
}
