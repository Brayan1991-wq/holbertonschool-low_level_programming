#include <stdlib.h>
#include <stdio.h>
/**
*  main - Entry point
*  Return: always 0 (success)
*
**/
int main(void)
{
int a;
a = 97;
while
(a <= 122)
{
if ((a != 'q' && a != 'e') && a <= 122)
putchar(a);
a++;
}
putchar('\n');
return (0);
}
