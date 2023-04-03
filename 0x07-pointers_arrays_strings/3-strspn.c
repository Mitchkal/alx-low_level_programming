#include "main.h"
/**
*_strspn - returns size of substing of s that is in accept
* @s : the string s
* @accept : the destination with string to compare
* Return: returns 0 or the byte size.
*/
unsigned int _strspn(char *s, char *accept)
{
	char *ptr2;
	char *ptr;
	unsigned int bytes;

	ptr = s;
	ptr2 = accept;
	bytes = 0;

	if (s == NULL || accept == NULL)
		return (0);

	while (*ptr != '\0')
	{
		ptr2 = accept;

		while (*ptr2 != '\0')
		{
			if (*ptr == *ptr2)
			{
				bytes++;
				break;
			}
			ptr2++;

		}
		/*check if *ptr is not in accept and stop counting*/
		if (*ptr2 == '\0')
			return (bytes);

		ptr++;
	}
	return (bytes);
}
