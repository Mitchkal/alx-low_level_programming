#include "main.h"
/**
* _strcat - joins two strings
* @dest : the destination string
*@src : the source string
* Return: returns the pointer to destination.
*/
char *_strcat(char *dest, char *src)
{
	char *joint;

	joint = strcat(dest, src);

	return (joint);
}
