#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring.
 *@s: input
 *@accept: input
 *Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 1, l;
	unsigned int count = 0;

	while (*(accept + j) != '\0')
		j++;

	while (*(s + i) != '\0' && k)
	{
		for (l = 0; l < j; l++)
		{
			if (*(s + i) == *(accept + l))
			{
				k = 1;
				count++;
				break;
			}
			else
				k = 0;
		}
		i++;
	}
	return (count);
}
