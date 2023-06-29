#include "main.h"
/**
 * print_rev -  función que imprima una cadena, al revés
 * @s: string
 * Return: void
 **/
void print_rev(char *s)
{
int i, j;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (j = i; j > 0; j--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
