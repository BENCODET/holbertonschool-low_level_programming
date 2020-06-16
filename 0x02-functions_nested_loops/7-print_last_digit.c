#include "holberton.h"

/**
 *print_last_digit - computes absolute value
 *@n: The checked number
 * Return: return last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n >= 0)
	{
		_putchar(m + 48);
	}
	else
	{
		m = ((-1) * m);
		_putchar(m + 48);
	}
	return (m);
}
