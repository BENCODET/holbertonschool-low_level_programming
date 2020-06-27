#include "holberton.h"
/**
 *cap_string - capitalizes all words of a string.
 *@s: input
 *Return: string
 */
char *cap_string(char *s)
{

	char l[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t',
		    ' '};
	char *d = s;
	int i, j;

	if (*s >= 97 && *s <= 122)
		*s -= 32;
	while (*s != '\0')
	{
		i = 0;
		j = 1;
		s++;
		while (i < 13 && test)
		{
			if (*s == l[i] && *(s + 1) >= 97 && *(s + 1) <= 122)
			{
				s++;
				*s -= 32;
				j = 0;
			}
			i++;
		}
	}
	return (d);
}
