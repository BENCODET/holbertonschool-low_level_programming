#include "holberton.h"
#include <stdio.h>

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s:string
*Return : nothing
*/

void print_rev(char *s)
{
	int i = 0;
	int k;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i + 1;
	while (k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
