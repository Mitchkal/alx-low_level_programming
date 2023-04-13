#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - joins two strings
 * @s1 : string 1
 * @s2 : string 2
 * @n : the number of bytes of s2 to concatenate
 * Return: returns pointer to memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

	unsigned int k, l, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = strlen(s1);
	p = strlen(s2);

	if (n < p)
		p = n;

	s3 = malloc(sizeof(char) * (k + p + 1));

	if (s3 == NULL)
		return (NULL);

	for (l = 0; l < k; l++)
		s3[l] = s1[l];

	for (l = 0; l < p; l++)
		s3[k + l] = s2[l];

	s3[k + p] = '\0';

	return (s3);

}
