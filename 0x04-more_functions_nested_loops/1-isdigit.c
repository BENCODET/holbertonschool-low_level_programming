#include "holberton.h"

/**
 * _isdigit - checks for gigits
 *@c: 0 to 9
 * Return: 0 or 1.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
