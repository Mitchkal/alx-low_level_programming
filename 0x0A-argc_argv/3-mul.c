#include <stdio.h>
#include <stdlib.h>

/**
* main - prints result of multiplication
* Return: returns zero or one
* @argc: the number of arguments
* @argv: the array containing arguments
*/

int main(int argc, char **argv)
{
	int result = 0;

	if (argc == 3)
	{

		result = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
