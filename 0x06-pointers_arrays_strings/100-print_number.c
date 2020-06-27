#include "holberton.h"
#include <math.h>
/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int number = log10(n) + 1;
	int i;


	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; i < number; i++)
	{
		_putchar((n / pow(10, number)) + '0');
	}
	_putchar('\n');
}
