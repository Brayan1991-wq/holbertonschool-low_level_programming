#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times, in lower case
 *
 * Return: void
 **/
void print_alphabet_x10(void)
{
int v;
int a;
for (v = 48; v <= 57; v++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
