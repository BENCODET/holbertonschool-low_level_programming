#include "holberton.h"
/**
 * _isalpha - yes
 *@c: intege
 * Return: 0 or 1
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
