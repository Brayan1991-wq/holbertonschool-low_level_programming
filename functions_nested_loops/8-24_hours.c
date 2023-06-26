#include "main.h"
/**
 * jack_bauer - imprima cada minuto del día de Jack Bauer
 *
 * Return: The 24 hours of the day
 *
 *
 *
 **/
void jack_bauer(void)
{
int hora, h;
int minuto, m;
for (hora = 0; hora <= 2; hora++)
{
for (h = 0; h <= 9; h++)
{
if ((hora <= 1 && h <= 9) || (hora <= 2 && h <= 3))
{
for (minuto = 0; minuto <= 5; minuto++)
{
for (m = 0; m <= 9; m++)
{
_putchar(hora + '0');
_putchar(h + '0');
_putchar(':');
_putchar(minuto + '0');
_putchar(m + '0');
_putchar('\n');
}
}
}
}
}
}
