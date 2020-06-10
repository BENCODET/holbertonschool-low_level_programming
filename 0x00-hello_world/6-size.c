#include <stdio.h>
/**
 *main - dsplay the  size of types
 *
 *Return: 0
 */
int main(void)
{
char ch;
int in;
long int li;
long long int lli;
float fl;

printf("Size of a char: %d byte(s)\n", sizeof(ch));
printf("Size of an int: %d byte(s)\n", sizeof(in));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
 printf("Size of a float: %d byte(s)\n", sizeof(fl));
return (0);
}
