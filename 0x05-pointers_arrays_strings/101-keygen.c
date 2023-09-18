#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i, n, sum = 0;
	int passkey[100];

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passkey[i] = rand() % 78;
		sum += (passkey[i] + '0');
		putchar(passkey[i] + '0');
			if ((2772 - sum) - '0' < 78)
			{
				n = 2772 - sum - '0';
				sum += n;
				putchar(n + '0');
				break;
			}
	}

	return (0);
}
