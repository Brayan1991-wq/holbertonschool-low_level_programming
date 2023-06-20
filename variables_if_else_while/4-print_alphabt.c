#include <stdio.h>
/**
 * main - alphabet with exception
 * Description: Prints the alphabet in lowercase except q and e
 * Return: 0 (success)
 **/
int main(void)
{
int a;
a = 97;
while
(a <= 122)
{
if ((a != 101 && a != 113) && a <= 122)
putchar(a);
a++;
}
putchar('\n');
return (0);
}
