#include <stdio.h>

/**
 * main - Entry point
 *putchar takes ASCII values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');

	return (0);
}
