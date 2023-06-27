#include "main.h"
/**
 * more_numbers - print the numbers 10 times, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int v, n;
for (v = 1; v <= 10; v++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
_putchar('1');
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
