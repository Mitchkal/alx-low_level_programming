#include <stdio.h>

/**
 * main - Entry point
 *putchar takes ASCII values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
