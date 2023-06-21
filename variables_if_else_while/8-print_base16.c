#include <stdio.h>
/**
 * main - hexadecimal
 * Description: print base 16 numbers
 * Return: 0 (success)
 **/
int main(void)
{
int a, n;
for (a = 48; a <= 57; a++)
{
putchar(a);
}
for (n = 97; n <= 102; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
