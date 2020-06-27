#include "holberton.h"
/**
 *leet - 0
 *@r: string
 *Return: string
 *
 */
char *leet(char *r)
{
	int i, j;
	char k[] = {'4', '3', '0', '7', '1'};
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char m[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((r[i] == l[j]) || (r[i] == m[j]))
				r[i] = k[j];
		}
	}

	return (r);
}
