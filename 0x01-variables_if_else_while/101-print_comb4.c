#include <stdio.h>

/**
 * main - Entry point
 *putchar takes ASCII values
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar (i);
				putchar (j);
				putchar (k);

				if (!(1 == 7 && j == 8 &&  k == 9))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	return (0);
}
