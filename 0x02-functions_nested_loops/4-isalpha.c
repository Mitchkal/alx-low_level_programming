#include "main.h"

/**
 *_isalpha -checks if the character is in the alphabet based on its ASCII value
 *
 * Return: 1 if True  or  Always 0 if not
 * @c: the ASCII value of the character
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
		return (0);
}
