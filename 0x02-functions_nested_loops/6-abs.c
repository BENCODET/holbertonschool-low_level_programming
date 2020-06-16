#include "holberton.h"

/**
 *_abs - computes absolute value
 *@n: The checked number
 * Return: return |n|
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return ((-1) * n);
	}
	return (0);
}
