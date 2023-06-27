#include "main.h"
/**
 * print_line - draw a straight line at the terminal
 * @n: number of times to print the character
 * Return: void
 **/
void print_line(int n)
{
if (n == 0 && n < 0)
{
_putchar('\n');
}
else
{
int a;
for (a = 1; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
