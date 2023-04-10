#include <stdio.h>
#include "main.h"

/**
* main- prints program name followed by new line
* @argc : the number of argumentss passed
* @argv : the array of arguments
* Return: returns zero
*/

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", *argv);

	}

	return (0);
}


