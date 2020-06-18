#include "holberton.h"
/**
 *print_line - print n times _
 *@n: number of lines
 *Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{	_putchar ('_');
	}
	_putchar ('\n');
}
