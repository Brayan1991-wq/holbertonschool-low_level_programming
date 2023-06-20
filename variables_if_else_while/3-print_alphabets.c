#include <stdio.h>
/**
 * main - Uppercase and lowercase alphabet
 * Description: Print uppercase and lowercase alphabet
 * Return: 0 (success)
 **/
int main(void)
{
char a, b;
for (a = 97; a <= 122; a++)
{
putchar(a);
}
for (b = 65; b <= 90; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
