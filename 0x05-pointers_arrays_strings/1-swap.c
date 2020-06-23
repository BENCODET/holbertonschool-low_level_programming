#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *@a: First integer
 *@b: Second integer
 */
void swap_int(int *a, int *b)

{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
