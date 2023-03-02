#include <stdlib.h>
#include <stdio.h>
/**
*  main - Entry point
*
*  Return: always 0 (success)
**/
int main(void)
{
int a;
int m;
for (a = 97; a <= 122; a++)
{
putchar(a);
}
for (m = 65; m <= 90; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
