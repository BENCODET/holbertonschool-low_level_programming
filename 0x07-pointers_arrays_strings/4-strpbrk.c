#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input
 *@accept: input
 *Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, k = 1, l;
	char *r;

	r = NULL;
	while (*(accept + j) != '\0')
		j++;

	while (*(s + i) != '\0' && k)
	{
		for (l = 0; l < j; l++)
		{
			if (*(s + i) == *(accept + l))
			{
				k = 0;
				r = s + i;
				break;
			}
		}
		i++;
	}
	return (r);
}
