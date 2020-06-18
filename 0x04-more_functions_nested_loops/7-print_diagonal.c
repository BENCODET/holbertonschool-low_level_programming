#include "holberton.h"
/**
 *print_diagonal - print spaces
 *@n: number of spaces
 *Return: nothing
 */

void print_diagonal(int n)
{

	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (i > 0)
			_putchar (' ');
	}
	_putchar ('\n');
}
