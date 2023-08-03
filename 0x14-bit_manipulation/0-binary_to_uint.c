#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string f binarycharacters
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	char *buffer;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	buffer = (char *) b;

	while (*buffer != '\0')
	{
		if (*buffer != '0' && *buffer != '1')
			return (0);

		num = num * 2 + (*buffer - '0');
		buffer++;
	}
	return (num);
}
