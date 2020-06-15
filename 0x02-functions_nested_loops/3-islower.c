#include "holberton.h"

/**
 * _islower - check lowercase
 *@c: The number to be checked
 * Return: Always 0.
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
