#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - tests the program
 * @argc : counts arguments
 * @argv: the arguments
 * Return: 0
 */
int main(argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);

	}

	f = get _op_func(argv[2]);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);

	if ((argv[2][0] == '%' || argv[2][0] == '/' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(n1, n2));
	return (0);
}

