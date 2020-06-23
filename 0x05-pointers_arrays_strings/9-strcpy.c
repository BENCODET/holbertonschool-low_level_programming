#include "holberton.h"
/**
 *_strcpy - copies the string pointed to by src, including the terminating null
 *@src: src
 *@dest: dest
 *Return: desty
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
