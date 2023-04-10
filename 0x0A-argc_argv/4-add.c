#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
	char *endptr;
	long int value;

	if (argc == 1)
	{
	printf("0\n");
	return (0);

	}
	for (i = 1; i < argc; i++)
	{

	value = strtol(argv[i], &endptr, 10);

	if (*endptr != '\0' || value > INT_MAX || value < INT_MIN)
	{
		printf("Error\n");

		return (1);
	}

	result += atoi(argv[i]);

	}

	printf("%d\n", result);

	return (0);
}

