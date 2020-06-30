#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: A pointer to the beginning of occurance, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0' || haystack[0] == '\0')
	{
		return (haystack);
	}

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
