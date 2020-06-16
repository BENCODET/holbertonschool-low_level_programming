#include "holberton.h"

/**
 *jack_bauer - Print every minutes
 *
 * Return: return 0
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

		for (i = 0 ; i <= 2 ; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (i == 2 && j > 3)
					continue;
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar(i + 48);
						_putchar(j + 48);
						_putchar(':');
						_putchar(k + 48);
						_putchar(l + 48);
						_putchar('\n');
					}
				}
			}
		}
}
