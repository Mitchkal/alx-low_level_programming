#include "main.h"

/**
 *_islower -checks if the character is lower cse based on its ASCII value
 *
 * Return: 1 if its lowercase  or  Alwyas 0 if not
 * @c: the ASCI
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
		return (0);
}
