#include <stdio.h>
#include <stdlib.h>
/**
* main - prints number of arguments passed to it
* @argc : the number of arguments
* @argv : the array storing the arguments
* Return: returns 0
*/
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);

}
