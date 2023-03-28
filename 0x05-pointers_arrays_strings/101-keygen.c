#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
* main - program entry
*Return: Returns password or zero
*/

int main(void)

{
	int i, r;

	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		r = rand() % 62;

		if (r < 26)
		{
			password[i] = 'a' + r;
		}
		else if (r < 52)
		{
			password[i] = 'A' + (r - 26);
		}
		else
		{
			password[i] = '0' + (r - 52);
		}
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
