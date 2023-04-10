#include <stdio.h>
#include <stdlib.h>
/**
* main - prints all received arguments
* Return: returns 0
* @argc : the number of arguments
* @argv : the array containing the arguments
*/

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);

	}
	return (0);
}
