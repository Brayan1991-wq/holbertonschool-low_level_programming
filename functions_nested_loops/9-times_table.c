#include "main.h"
/**
 * times_table - print the multiplication table of 9
 *
 * Return: The multiplication table of 9
 *
 **/
void times_table(void)
{
int a, b, resultado, c, d;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
resultado = a * b;
if (resultado > 9)
{
c = resultado % 10;
d = (resultado - c) / 10;
_putchar(',');
_putchar(' ');
_putchar(d + '0');
_putchar(c + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(resultado + '0');
}
}
_putchar('\n');
}
}
