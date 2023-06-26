#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @n:the number to print
 *
 * Return:1 positive, 0 negative, -1 for something else
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
