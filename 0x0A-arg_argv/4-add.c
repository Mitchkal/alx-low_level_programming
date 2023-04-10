#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers to infinity
 * @argc : the number of arguments passed
 * @argv : the array storing the variables
 * Return: zero or 1 on error
 */
int main(int argc, char **argv)
{
	int result = 0;
	int i = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);

	}
	for (i = 1; i < argc; i++)
	{

	if (atoi(argv[i]) == 0 && argv[i][0] != '0')
	{
		printf("Error\n");

		return (1);
	}

	result += atoi(argv[i]);

	}

	printf("%d\n", result);

	return (0);
}

