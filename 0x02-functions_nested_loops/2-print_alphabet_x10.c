#include"holberton.h"

/**
 * print_alphabet_x10 - print 10 times alphabet.
 *
 */


void print_alphabet_x10(void)
{
	int n, i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
