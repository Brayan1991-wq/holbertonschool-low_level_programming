#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: is the size of the triangle
 * Return: void
 **/
void print_triangle(int size)
{
int a, b;
if (size <= 0)
_putchar('\n');
for (a = 0; a < size; a++)
{
for (b = size - a - 1; b > 0; b--)
_putchar(' ');
for (b = a + 1; b > 0; b--)
_putchar('#');
_putchar('\n');
}
}
