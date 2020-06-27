#include "holberton.h"
/**
 * rot13 - Encode a string using rot13
 * @str: given string
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *incode = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = incode[j];
				break;
			}
		}
	}
	return (str);
}
