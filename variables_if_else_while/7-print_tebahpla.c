#include <stdio.h>
/**
 * main - backwards alphabet
 * Description: print the alphabet backwards
 * Return: 0 (success)
 **/
int main(void)
{
char x;
for (x = 122; x >= 97; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
