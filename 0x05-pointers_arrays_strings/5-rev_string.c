#include "main.h"
/**
*rev_string - prints string and reverses it
*@s : the string
*
*/

void rev_string(char *s)
{
	int i, j; /* the counters*/
	char *hold;

	hold = malloc(strlen(s) + 1);

	strcpy(hold, s);

	for (i = 0, j = strlen(hold) - 1; i < j; i++, j--)
	{
		char tmp = hold[i];

		hold[i] = hold[j];
		hold[j] = tmp;
	}
	strcpy(s, hold);
}
