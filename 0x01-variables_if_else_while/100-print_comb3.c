#include <stdio.h>
/**
 *main - maine function
 *Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; ++i)
	{
		for (j = i + 1 ; j <= '9'; ++j)
		{
			putchar (i);
			putchar (j);
			if (i != '8' || j != '9')
			{
				putchar (',');
				putchar (' ');
			}
			else
				putchar ('\n');
		}
	}
	return (0);
}
