#include <stdio.h>

/**
 * main - Entry point
 *putchar takes ASCII values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
	}
	printf('\n');

	return (0);
}
