#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: value
 * @y: the power
 * Return: the result of x and y
 **/
int _pow_recursion(int x, int y)
{
int a = x;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
a *= _pow_recursion(x, y - 1);
return (a);
}
